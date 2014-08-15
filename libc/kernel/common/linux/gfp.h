/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_GFP_H
#define __LINUX_GFP_H
#include <linux/mmzone.h>
#include <linux/stddef.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/linkage.h>
#include <linux/topology.h>
#include <linux/mmdebug.h>
struct vm_area_struct;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __GFP_DMA ((__force gfp_t)0x01u)
#define __GFP_HIGHMEM ((__force gfp_t)0x02u)
#define __GFP_DMA32 ((__force gfp_t)0x04u)
#define __GFP_MOVABLE ((__force gfp_t)0x08u)  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFP_ZONEMASK (__GFP_DMA|__GFP_HIGHMEM|__GFP_DMA32|__GFP_MOVABLE)
#define __GFP_WAIT ((__force gfp_t)0x10u)  
#define __GFP_HIGH ((__force gfp_t)0x20u)  
#define __GFP_IO ((__force gfp_t)0x40u)  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __GFP_FS ((__force gfp_t)0x80u)  
#define __GFP_COLD ((__force gfp_t)0x100u)  
#define __GFP_NOWARN ((__force gfp_t)0x200u)  
#define __GFP_REPEAT ((__force gfp_t)0x400u)  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __GFP_NOFAIL ((__force gfp_t)0x800u)  
#define __GFP_NORETRY ((__force gfp_t)0x1000u) 
#define __GFP_COMP ((__force gfp_t)0x4000u) 
#define __GFP_ZERO ((__force gfp_t)0x8000u) 
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __GFP_NOMEMALLOC ((__force gfp_t)0x10000u)  
#define __GFP_HARDWALL ((__force gfp_t)0x20000u)  
#define __GFP_THISNODE ((__force gfp_t)0x40000u) 
#define __GFP_RECLAIMABLE ((__force gfp_t)0x80000u)  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __GFP_NOTRACK ((__force gfp_t)0)
#define __GFP_NOTRACK_FALSE_POSITIVE (__GFP_NOTRACK)
#define __GFP_BITS_SHIFT 22  
#define __GFP_BITS_MASK ((__force gfp_t)((1 << __GFP_BITS_SHIFT) - 1))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFP_NOWAIT (GFP_ATOMIC & ~__GFP_HIGH)
#define GFP_ATOMIC (__GFP_HIGH)
#define GFP_NOIO (__GFP_WAIT)
#define GFP_NOFS (__GFP_WAIT | __GFP_IO)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFP_KERNEL (__GFP_WAIT | __GFP_IO | __GFP_FS)
#define GFP_TEMPORARY (__GFP_WAIT | __GFP_IO | __GFP_FS |   __GFP_RECLAIMABLE)
#define GFP_USER (__GFP_WAIT | __GFP_IO | __GFP_FS | __GFP_HARDWALL)
#define GFP_HIGHUSER (__GFP_WAIT | __GFP_IO | __GFP_FS | __GFP_HARDWALL |   __GFP_HIGHMEM)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFP_HIGHUSER_MOVABLE (__GFP_WAIT | __GFP_IO | __GFP_FS |   __GFP_HARDWALL | __GFP_HIGHMEM |   __GFP_MOVABLE)
#define GFP_IOFS (__GFP_IO | __GFP_FS)
#define GFP_THISNODE ((__force gfp_t)0)
#define GFP_MOVABLE_MASK (__GFP_RECLAIMABLE|__GFP_MOVABLE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFP_RECLAIM_MASK (__GFP_WAIT|__GFP_HIGH|__GFP_IO|__GFP_FS|  __GFP_NOWARN|__GFP_REPEAT|__GFP_NOFAIL|  __GFP_NORETRY|__GFP_NOMEMALLOC)
#define GFP_BOOT_MASK (__GFP_BITS_MASK & ~(__GFP_WAIT|__GFP_IO|__GFP_FS))
#define GFP_CONSTRAINT_MASK (__GFP_HARDWALL|__GFP_THISNODE)
#define GFP_SLAB_BUG_MASK (__GFP_DMA32|__GFP_HIGHMEM|~__GFP_BITS_MASK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFP_DMA __GFP_DMA
#define GFP_DMA32 __GFP_DMA32
#define OPT_ZONE_HIGHMEM ZONE_NORMAL
#define OPT_ZONE_DMA ZONE_NORMAL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OPT_ZONE_DMA32 ZONE_NORMAL
#if 16 * (ZONES_SHIFT > BITS_PER_LONG)
#error ZONES_SHIFT too large to create GFP_ZONE_TABLE integer
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GFP_ZONE_TABLE (   (ZONE_NORMAL << 0 * ZONES_SHIFT)   | (OPT_ZONE_DMA << __GFP_DMA * ZONES_SHIFT)   | (OPT_ZONE_HIGHMEM << __GFP_HIGHMEM * ZONES_SHIFT)   | (OPT_ZONE_DMA32 << __GFP_DMA32 * ZONES_SHIFT)   | (ZONE_NORMAL << __GFP_MOVABLE * ZONES_SHIFT)   | (OPT_ZONE_DMA << (__GFP_MOVABLE | __GFP_DMA) * ZONES_SHIFT)   | (ZONE_MOVABLE << (__GFP_MOVABLE | __GFP_HIGHMEM) * ZONES_SHIFT)  | (OPT_ZONE_DMA32 << (__GFP_MOVABLE | __GFP_DMA32) * ZONES_SHIFT) )
#define GFP_ZONE_BAD (   1 << (__GFP_DMA | __GFP_HIGHMEM)   | 1 << (__GFP_DMA | __GFP_DMA32)   | 1 << (__GFP_DMA32 | __GFP_HIGHMEM)   | 1 << (__GFP_DMA | __GFP_DMA32 | __GFP_HIGHMEM)   | 1 << (__GFP_MOVABLE | __GFP_HIGHMEM | __GFP_DMA)   | 1 << (__GFP_MOVABLE | __GFP_DMA32 | __GFP_DMA)   | 1 << (__GFP_MOVABLE | __GFP_DMA32 | __GFP_HIGHMEM)   | 1 << (__GFP_MOVABLE | __GFP_DMA32 | __GFP_DMA | __GFP_HIGHMEM) )
#ifndef HAVE_ARCH_FREE_PAGE
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef HAVE_ARCH_ALLOC_PAGE
#endif
struct page *
__alloc_pages_nodemask(gfp_t gfp_mask, unsigned int order,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct zonelist *zonelist, nodemask_t *nodemask);
#define alloc_pages(gfp_mask, order)   alloc_pages_node(numa_node_id(), gfp_mask, order)
#define alloc_page_vma(gfp_mask, vma, addr) alloc_pages(gfp_mask, 0)
#define alloc_page(gfp_mask) alloc_pages(gfp_mask, 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __get_free_page(gfp_mask)   __get_free_pages((gfp_mask), 0)
#define __get_dma_pages(gfp_mask, order)   __get_free_pages((gfp_mask) | GFP_DMA, (order))
#define __free_page(page) __free_pages((page), 0)
#define free_page(addr) free_pages((addr), 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
