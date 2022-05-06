#ifndef VULKAN_OHOS_H_
#define VULKAN_OHOS_H_ 1

/*
** Copyright 2015-2021 The Khronos Group Inc.
**
** SPDX-License-Identifier: Apache-2.0
*/

/*
** This header is generated from the Khronos Vulkan XML API Registry.
**
*/


#ifdef __cplusplus
extern "C" {
#endif



#define VK_OHOS_openhm_surface 1
#define VK_OHOS_OPENHM_SURFACE_SPEC_VERSION 1
#define VK_OHOS_OPENHM_SURFACE_EXTENSION_NAME "VK_OHOS_openhm_surface"
typedef VkFlags VkOpenhmSurfaceCreateFlagsOHOS;
typedef struct VkOpenhmSurfaceCreateInfoOHOS {
    VkStructureType                   sType;
    const void*                       pNext;
    VkOpenhmSurfaceCreateFlagsOHOS    flags;
    OHNativeWindow*                   window;
} VkOpenhmSurfaceCreateInfoOHOS;

typedef VkResult (VKAPI_PTR *PFN_VkCreateOpenhmSurfaceOHOS)(VkInstance instance, const VkOpenhmSurfaceCreateInfoOHOS* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL VkCreateOpenhmSurfaceOHOS(
    VkInstance                                  instance,
    const VkOpenhmSurfaceCreateInfoOHOS*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif

#ifdef __cplusplus
}
#endif

#endif
