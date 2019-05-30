//
//  Copyright (C) 2019 Microsoft.  All rights reserved.
//  See LICENSE file in the project root for full license information.
// 
#include "UnpackTestData.hpp"

#include <map>

namespace MsixTest { namespace Unpack {

    // Returns files that must be unpacked for StoreSigned_Desktop_x64_MoviesTV.appx
    const std::map<std::string, std::uint64_t>& GetExpectedFiles()
    {
        static const std::map<std::string, std::uint64_t> files = 
        {
            { "AppxBlockMap.xml" , 59403 },
            { "AppxManifest.xml" , 13627 },
            { "AppxSignature.p7x" , 10622 },
            { "EntCommon.dll" , 7830384 },
            { "EntPlat.dll" , 9170800 },
            { "EntSyncFx.dll" , 677232 },
            { "gnsdk_fp.dll" , 20648 },
            { "resources.pri" , 786688 },
            { "Video.UI.exe" , 15951216 },
            { "AppxMetadata/CodeIntegrity.cat" , 11458 },
            { "Assets/AppList.scale-100.png" , 247 },
            { "Assets/AppList.targetsize-16.png" , 176 },
            { "Assets/AppList.targetsize-16_altform-unplated.png" , 176 },
            { "Assets/AppList.targetsize-20.png" , 181 },
            { "Assets/AppList.targetsize-20_altform-unplated.png" , 181 },
            { "Assets/AppList.targetsize-24.png" , 188 },
            { "Assets/AppList.targetsize-24_altform-unplated.png" , 188 },
            { "Assets/AppList.targetsize-256.png" , 1452 },
            { "Assets/AppList.targetsize-256_altform-unplated.png" , 1452 },
            { "Assets/AppList.targetsize-30.png" , 231 },
            { "Assets/AppList.targetsize-30_altform-unplated.png" , 231 },
            { "Assets/AppList.targetsize-32.png" , 239 },
            { "Assets/AppList.targetsize-32_altform-unplated.png" , 239 },
            { "Assets/AppList.targetsize-36.png" , 252 },
            { "Assets/AppList.targetsize-36_altform-unplated.png" , 252 },
            { "Assets/AppList.targetsize-40.png" , 278 },
            { "Assets/AppList.targetsize-40_altform-unplated.png" , 278 },
            { "Assets/AppList.targetsize-48.png" , 305 },
            { "Assets/AppList.targetsize-48_altform-unplated.png" , 305 },
            { "Assets/AppList.targetsize-60.png" , 342 },
            { "Assets/AppList.targetsize-60_altform-unplated.png" , 342 },
            { "Assets/AppList.targetsize-64.png" , 359 },
            { "Assets/AppList.targetsize-64_altform-unplated.png" , 359 },
            { "Assets/AppList.targetsize-72.png" , 396 },
            { "Assets/AppList.targetsize-72_altform-unplated.png" , 396 },
            { "Assets/AppList.targetsize-80.png" , 451 },
            { "Assets/AppList.targetsize-80_altform-unplated.png" , 451 },
            { "Assets/AppList.targetsize-96.png" , 514 },
            { "Assets/AppList.targetsize-96_altform-unplated.png" , 514 },
            { "Assets/FileExtension.targetsize-129.png" , 2473 },
            { "Assets/FileExtension.targetsize-16.png" , 429 },
            { "Assets/FileExtension.targetsize-20.png" , 516 },
            { "Assets/FileExtension.targetsize-24.png" , 592 },
            { "Assets/FileExtension.targetsize-256.png" , 4943 },
            { "Assets/FileExtension.targetsize-32.png" , 741 },
            { "Assets/FileExtension.targetsize-336.png" , 6379 },
            { "Assets/FileExtension.targetsize-40.png" , 917 },
            { "Assets/FileExtension.targetsize-48.png" , 1082 },
            { "Assets/FileExtension.targetsize-63.png" , 1351 },
            { "Assets/FileExtension.targetsize-64.png" , 1432 },
            { "Assets/LargeLogo.scale-100.png" , 1064 },
            { "Assets/Logo.scale-100.png" , 483 },
            { "Assets/Movie-TVStoreLogo.scale-100.png" , 312 },
            { "Assets/SmallLogo.scale-100.png" , 287 },
            { "Assets/SplashScreen.scale-100.png" , 1317 },
            { "Assets/video_offline_demo_page1.jpg" , 187761 },
            { "Assets/video_offline_demo_page1_alternate.jpg" , 192488 },
            { "Assets/video_offline_demo_page2.jpg" , 78720 },
            { "Assets/video_offline_demo_page3.jpg" , 216347 },
            { "Assets/WideLogo.scale-100.png" , 589 },
            { "Assets/contrast-black/AppList.scale-100_contrast-black.png" , 247 },
            { "Assets/contrast-black/AppList.targetsize-16_altform-unplated_contrast-black.png" , 176 },
            { "Assets/contrast-black/AppList.targetsize-16_contrast-black.png" , 176 },
            { "Assets/contrast-black/AppList.targetsize-20_altform-unplated_contrast-black.png" , 181 },
            { "Assets/contrast-black/AppList.targetsize-20_contrast-black.png" , 181 },
            { "Assets/contrast-black/AppList.targetsize-24_altform-unplated_contrast-black.png" , 188 },
            { "Assets/contrast-black/AppList.targetsize-24_contrast-black.png" , 188 },
            { "Assets/contrast-black/AppList.targetsize-256_altform-unplated_contrast-black.png" , 1452 },
            { "Assets/contrast-black/AppList.targetsize-256_contrast-black.png" , 1452 },
            { "Assets/contrast-black/AppList.targetsize-30_altform-unplated_contrast-black.png" , 231 },
            { "Assets/contrast-black/AppList.targetsize-30_contrast-black.png" , 231 },
            { "Assets/contrast-black/AppList.targetsize-32_altform-unplated_contrast-black.png" , 239 },
            { "Assets/contrast-black/AppList.targetsize-32_contrast-black.png" , 239 },
            { "Assets/contrast-black/AppList.targetsize-36_altform-unplated_contrast-black.png" , 252 },
            { "Assets/contrast-black/AppList.targetsize-36_contrast-black.png" , 252 },
            { "Assets/contrast-black/AppList.targetsize-40_altform-unplated_contrast-black.png" , 278 },
            { "Assets/contrast-black/AppList.targetsize-40_contrast-black.png" , 278 },
            { "Assets/contrast-black/AppList.targetsize-48_altform-unplated_contrast-black.png" , 305 },
            { "Assets/contrast-black/AppList.targetsize-48_contrast-black.png" , 305 },
            { "Assets/contrast-black/AppList.targetsize-60_altform-unplated_contrast-black.png" , 342 },
            { "Assets/contrast-black/AppList.targetsize-60_contrast-black.png" , 342 },
            { "Assets/contrast-black/AppList.targetsize-64_altform-unplated_contrast-black.png" , 359 },
            { "Assets/contrast-black/AppList.targetsize-64_contrast-black.png" , 359 },
            { "Assets/contrast-black/AppList.targetsize-72_altform-unplated_contrast-black.png" , 396 },
            { "Assets/contrast-black/AppList.targetsize-72_contrast-black.png" , 396 },
            { "Assets/contrast-black/AppList.targetsize-80_altform-unplated_contrast-black.png" , 451 },
            { "Assets/contrast-black/AppList.targetsize-80_contrast-black.png" , 451 },
            { "Assets/contrast-black/AppList.targetsize-96_altform-unplated_contrast-black.png" , 514 },
            { "Assets/contrast-black/AppList.targetsize-96_contrast-black.png" , 514 },
            { "Assets/contrast-black/LargeLogo.scale-100_contrast-black.png" , 1064 },
            { "Assets/contrast-black/Logo.scale-100_contrast-black.png" , 483 },
            { "Assets/contrast-black/Movie-TVStoreLogo.scale-100_contrast-black.png" , 312 },
            { "Assets/contrast-black/SmallLogo.scale-100_contrast-black.png" , 287 },
            { "Assets/contrast-black/SplashScreen.scale-100_contrast-black.png" , 1317 },
            { "Assets/contrast-black/WideLogo.scale-100_contrast-black.png" , 589 },
            { "Assets/contrast-white/AppList.scale-100_contrast-white.png" , 253 },
            { "Assets/contrast-white/AppList.targetsize-16_altform-unplated_contrast-white.png" , 177 },
            { "Assets/contrast-white/AppList.targetsize-16_contrast-white.png" , 177 },
            { "Assets/contrast-white/AppList.targetsize-20_altform-unplated_contrast-white.png" , 182 },
            { "Assets/contrast-white/AppList.targetsize-20_contrast-white.png" , 182 },
            { "Assets/contrast-white/AppList.targetsize-24_altform-unplated_contrast-white.png" , 190 },
            { "Assets/contrast-white/AppList.targetsize-24_contrast-white.png" , 190 },
            { "Assets/contrast-white/AppList.targetsize-256_altform-unplated_contrast-white.png" , 1480 },
            { "Assets/contrast-white/AppList.targetsize-256_contrast-white.png" , 1480 },
            { "Assets/contrast-white/AppList.targetsize-30_altform-unplated_contrast-white.png" , 228 },
            { "Assets/contrast-white/AppList.targetsize-30_contrast-white.png" , 228 },
            { "Assets/contrast-white/AppList.targetsize-32_altform-unplated_contrast-white.png" , 239 },
            { "Assets/contrast-white/AppList.targetsize-32_contrast-white.png" , 239 },
            { "Assets/contrast-white/AppList.targetsize-36_altform-unplated_contrast-white.png" , 252 },
            { "Assets/contrast-white/AppList.targetsize-36_contrast-white.png" , 252 },
            { "Assets/contrast-white/AppList.targetsize-40_altform-unplated_contrast-white.png" , 277 },
            { "Assets/contrast-white/AppList.targetsize-40_contrast-white.png" , 277 },
            { "Assets/contrast-white/AppList.targetsize-48_altform-unplated_contrast-white.png" , 309 },
            { "Assets/contrast-white/AppList.targetsize-48_contrast-white.png" , 309 },
            { "Assets/contrast-white/AppList.targetsize-60_altform-unplated_contrast-white.png" , 355 },
            { "Assets/contrast-white/AppList.targetsize-60_contrast-white.png" , 355 },
            { "Assets/contrast-white/AppList.targetsize-64_altform-unplated_contrast-white.png" , 374 },
            { "Assets/contrast-white/AppList.targetsize-64_contrast-white.png" , 374 },
            { "Assets/contrast-white/AppList.targetsize-72_altform-unplated_contrast-white.png" , 408 },
            { "Assets/contrast-white/AppList.targetsize-72_contrast-white.png" , 408 },
            { "Assets/contrast-white/AppList.targetsize-80_altform-unplated_contrast-white.png" , 459 },
            { "Assets/contrast-white/AppList.targetsize-80_contrast-white.png" , 459 },
            { "Assets/contrast-white/AppList.targetsize-96_altform-unplated_contrast-white.png" , 526 },
            { "Assets/contrast-white/AppList.targetsize-96_contrast-white.png" , 526 },
            { "Assets/contrast-white/LargeLogo.scale-100_contrast-white.png" , 1113 },
            { "Assets/contrast-white/Logo.scale-100_contrast-white.png" , 494 },
            { "Assets/contrast-white/Movie-TVStoreLogo.scale-100_contrast-white.png" , 517 },
            { "Assets/contrast-white/SmallLogo.scale-100_contrast-white.png" , 297 },
            { "Assets/contrast-white/SplashScreen.scale-100_contrast-white.png" , 1344 },
            { "Assets/contrast-white/WideLogo.scale-100_contrast-white.png" , 650 },
            { "Images/BlankImage.png" , 15392 },
            { "Resources/Fonts/SegMVR2.ttf" , 47352 }
        };
        return files;
    }
} }