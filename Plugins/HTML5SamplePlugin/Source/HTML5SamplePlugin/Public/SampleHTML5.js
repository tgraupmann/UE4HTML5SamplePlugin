// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

var UE_SampleHTML5 = {
    UE_InitSampleHTML5: function () {
        UE_JSSampleHTML5.UE_InitSampleHTML5();
    },
    // persistant OBJECT accessible within JS code
    $UE_JSSampleHTML5: {
        UE_InitSampleHTML5: function () {
            console.log('UE_InitSampleHTML5');
        }
    }
};

autoAddDeps(UE_SampleHTML5, '$UE_JSSampleHTML5');
mergeInto(LibraryManager.library, UE_SampleHTML5);
