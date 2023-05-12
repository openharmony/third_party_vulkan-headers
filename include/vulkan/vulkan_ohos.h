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

#define VK_OpenHarmony_OHOS_surface 1
typedef struct NativeWindow OHNativeWindow;
#define VK_OPENHARMONY_OHOS_SURFACE_SPEC_VERSION 1
#define VK_OPENHARMONY_OHOS_SURFACE_EXTENSION_NAME "VK_OpenHarmony_OHOS_surface"
// VK_STRUCTURE_TYPE_OHOS_SURFACE_CREATE_INFO_OPENHARMONY
typedef VkFlags VkOHOSSurfaceCreateFlagsOpenHarmony;
typedef struct VkOHOSSurfaceCreateInfoOpenHarmony {
    VkStructureType                   sType;
    const void*                       pNext;
    VkOHOSSurfaceCreateFlagsOpenHarmony    flags;
    OHNativeWindow*                   window;
} VkOHOSSurfaceCreateInfoOpenHarmony;

typedef VkResult (VKAPI_PTR *PFN_vkCreateOHOSSurfaceOpenHarmony)(VkInstance instance, const VkOHOSSurfaceCreateInfoOpenHarmony* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkCreateOHOSSurfaceOpenHarmony(
    VkInstance                                  instance,
    const VkOHOSSurfaceCreateInfoOpenHarmony*        pCreateInfo,
    const VkAllocationCallbacks*                pAllocator,
    VkSurfaceKHR*                               pSurface);
#endif

#define VK_OHOS_native_buffer 1

#define VK_OHOS_NATIVE_BUFFER_SPEC_VERSION 1
#define VK_OHOS_NATIVE_BUFFER_EXTENSION_NAME "VK_OHOS_native_buffer"

typedef VkFlags VkSwapchainImageUsageFlagsOpenHarmony;
typedef enum VkSwapchainImageUsageFlagBitsOpenHarmony {
    VK_SWAPCHAIN_IMAGE_USAGE_SHARED_BIT_OPENHARMONY = 0x00000001,
    VK_SWAPCHAIN_IMAGE_USAGE_FLAG_BITS_MAX_ENUM = 0x7FFFFFFF
} VkSwapchainImageUsageFlagBitsOpenHarmony;

typedef struct {
    VkStructureType                   sType;
    const void*                       pNext;
    BufferHandle*                     handle;
} VkNativeBufferOpenHarmony;

typedef struct {
    VkStructureType                   sType;
    const void*                       pNext;
    VkSwapchainImageUsageFlagsOpenHarmony    usage;
} VkSwapchainImageCreateInfoOpenHarmony;

typedef struct {
    VkStructureType                   sType;
    const void*                       pNext;
    VkBool32                          sharedImage;
} VkPhysicalDevicePresentationPropertiesOpenHarmony;

typedef VkResult (VKAPI_PTR *PFN_vkGetSwapchainGrallocUsageOpenHarmony)(
    VkDevice                          device,
    VkFormat                          format,
    VkImageUsageFlags                 imageUsage,
    uint64_t*                         grallocUsage);

typedef VkResult (VKAPI_PTR *PFN_vkSetNativeFenceFdOpenHarmony)(
    VkDevice                          device,
    int32_t                           nativeFenceFd,
    VkSemaphore                       semaphore,
    VkFence                           fence);

typedef VkResult (VKAPI_PTR *PFN_vkGetNativeFenceFdOpenHarmony)(
    VkQueue                           queue,
    uint32_t                          waitSemaphoreCount,
    const VkSemaphore*                pWaitSemaphores,
    VkImage                           image,
    int32_t*                          pNativeFenceFd);

#ifndef VK_NO_PROTOTYPES

VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainGrallocUsageOpenHarmony(
    VkDevice                          device,
    VkFormat                          format,
    VkImageUsageFlags                 imageUsage,
    uint64_t*                         grallocUsage
);

VKAPI_ATTR VkResult VKAPI_CALL vkSetNativeFenceFdOpenHarmony(
    VkDevice                          device,
    int32_t                           nativeFenceFd,
    VkSemaphore                       semaphore,
    VkFence                           fence
);

VKAPI_ATTR VkResult VKAPI_CALL vkGetNativeFenceFdOpenHarmony(
    VkQueue                           queue,
    uint32_t                          waitSemaphoreCount,
    const VkSemaphore*                pWaitSemaphores,
    VkImage                           image,
    int32_t*                          pNativeFenceFd
);

#endif

#define VK_OpenHarmony_external_memory_OHOS_native_buffer 1
struct OH_NativeBuffer;
#define VK_OPENHARMONY_EXTERNAL_MEMORY_OHOS_NATIVE_BUFFER_SPEC_VERSION 1
#define VK_OPENHARMONY_EXTERNAL_MEMORY_OHOS_NATIVE_BUFFER_EXTENSION_NAME "VK_OpenHarmony_external_memory_OHOS_native_buffer"
typedef struct VkOHOSNativeBufferUsageOpenHarmony {
    VkStructureType    sType;
    void*              pNext;
    uint64_t           OHOSNativeBufferUsage;
} VkOHOSNativeBufferUsageOpenHarmony;

typedef struct VkOHOSNativeBufferPropertiesOpenHarmony {
    VkStructureType    sType;
    void*              pNext;
    VkDeviceSize       allocationSize;
    uint32_t           memoryTypeBits;
} VkOHOSNativeBufferPropertiesOpenHarmony;

typedef struct VkOHOSNativeBufferFormatPropertiesOpenHarmony {
    VkStructureType                  sType;
    void*                            pNext;
    VkFormat                         format;
    uint64_t                         externalFormat;
    VkFormatFeatureFlags             formatFeatures;
    VkComponentMapping               samplerYcbcrConversionComponents;
    VkSamplerYcbcrModelConversion    suggestedYcbcrModel;
    VkSamplerYcbcrRange              suggestedYcbcrRange;
    VkChromaLocation                 suggestedXChromaOffset;
    VkChromaLocation                 suggestedYChromaOffset;
} VkOHOSNativeBufferFormatPropertiesOpenHarmony;

typedef struct VkImportOHOSNativeBufferInfoOpenHarmony {
    VkStructureType            sType;
    const void*                pNext;
    struct OH_NativeBuffer*    buffer;
} VkImportOHOSNativeBufferInfoOpenHarmony;

typedef struct VkMemoryGetOHOSNativeBufferInfoOpenHarmony {
    VkStructureType    sType;
    const void*        pNext;
    VkDeviceMemory     memory;
} VkMemoryGetOHOSNativeBufferInfoOpenHarmony;

typedef struct VkExternalFormatOpenHarmony {
    VkStructureType    sType;
    void*              pNext;
    uint64_t           externalFormat;
} VkExternalFormatOpenHarmony;

typedef VkResult (VKAPI_PTR *PFN_vkGetOHOSNativeBufferPropertiesOpenHarmony)(VkDevice device, const struct OH_NativeBuffer* buffer, VkOHOSNativeBufferPropertiesOpenHarmony* pProperties);
typedef VkResult (VKAPI_PTR *PFN_vkGetMemoryOHOSNativeBufferOpenHarmony)(VkDevice device, const VkMemoryGetOHOSNativeBufferInfoOpenHarmony* pInfo, struct OH_NativeBuffer** pBuffer);

#ifndef VK_NO_PROTOTYPES
VKAPI_ATTR VkResult VKAPI_CALL vkGetOHOSNativeBufferPropertiesOpenHarmony(
    VkDevice                                    device,
    const struct OH_NativeBuffer*               buffer,
    VkOHOSNativeBufferPropertiesOpenHarmony*         pProperties);

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryOHOSNativeBufferOpenHarmony(
    VkDevice                                     device,
    const VkMemoryGetOHOSNativeBufferInfoOpenHarmony* pInfo,
    struct OH_NativeBuffer**                     pBuffer);
#endif


#ifdef __cplusplus
}
#endif

#endif
