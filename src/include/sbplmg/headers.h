/*
 * Copyright (c) 2008, Maxim Likhachev
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the University of Pennsylvania nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __HEADERS_H_
#define __HEADERS_H_

#include <sbplmg/sbpl_exception.h>
#include <sbplmg/config.h>

#if MEM_CHECK == 1
#define _CRTDBG_MAP_ALLOC 
#define CRTDBG_MAP_ALLOC
#endif

#include <stdlib.h> //have to go after the defines above
#if MEM_CHECK == 1
#include <crtdbg.h>
#endif

#include <sbplmg/discrete_space_information/environment.h>
#include <sbplmg/discrete_space_information/environment_nav2D.h>
#include <sbplmg/discrete_space_information/environment_nav2Duu.h>
#include <sbplmg/discrete_space_information/environment_navxythetalat.h>
#include <sbplmg/discrete_space_information/environment_navxythetamlevlat.h>
#include <sbplmg/discrete_space_information/environment_robarm.h>
#include <sbplmg/discrete_space_information/environment_XXX.h>
#include <sbplmg/planners/adplanner.h>
#include <sbplmg/planners/ANAplanner.h>
#include <sbplmg/planners/araplanner.h>
#include <sbplmg/planners/planner.h>
#include <sbplmg/planners/ppcpplanner.h>
#include <sbplmg/planners/rstarplanner.h>
#include <sbplmg/planners/viplanner.h>
#include <sbplmg/planners/lazyARA.h>
#include <sbplmg/utils/2Dgridsearch.h>
#include <sbplmg/utils/heap.h>
#include <sbplmg/utils/list.h>
#include <sbplmg/utils/key.h>
#include <sbplmg/utils/mdp.h>
#include <sbplmg/utils/mdpconfig.h>
#include <sbplmg/utils/sbpl_fifo.h>
#include <sbplmg/utils/sbpl_bfs_2d.h>
#include <sbplmg/utils/sbpl_bfs_3d.h>
#include <sbplmg/utils/utils.h>

#endif

