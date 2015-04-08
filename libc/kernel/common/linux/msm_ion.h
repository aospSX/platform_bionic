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
#ifndef _LINUX_MSM_ION_H
#define _LINUX_MSM_ION_H
#include <linux/ion.h>
enum msm_ion_heap_types {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ION_HEAP_TYPE_MSM_START = ION_HEAP_TYPE_CUSTOM + 1,
 ION_HEAP_TYPE_IOMMU = ION_HEAP_TYPE_MSM_START,
 ION_HEAP_TYPE_DMA,
 ION_HEAP_TYPE_CP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ION_HEAP_TYPE_SECURE_DMA,
 ION_HEAP_TYPE_REMOVED,
};
enum cp_mem_usage {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 VIDEO_BITSTREAM = 0x1,
 VIDEO_PIXEL = 0x2,
 VIDEO_NONPIXEL = 0x3,
 MAX_USAGE = 0x4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 UNKNOWN = 0x7FFFFFFF,
};
#define ION_SET_CACHED(__cache) (__cache | ION_FLAG_CACHED)
#define ION_SET_UNCACHED(__cache) (__cache & ~ION_FLAG_CACHED)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ION_IS_CACHED(__flags) ((__flags) & ION_FLAG_CACHED)
#endif
