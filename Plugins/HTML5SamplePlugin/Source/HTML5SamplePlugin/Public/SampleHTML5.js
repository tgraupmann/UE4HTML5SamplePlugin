// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

var UE_SampleHTML5 = {
    // call from C++ to register function
    SampleHTML5_RegisterStringFunction: function (listener) {
        // save a reference to the listener to later call back into C++
        UE_JSSampleHTML5.Callback_RegisterStringFunction = function (str) {
            var cname = _malloc(str.length + 1);
            stringToUTF8(str, cname, str.length + 1);
            Runtime.dynCall('vi', listener, [cname]);
        }
    },
    // function to be called from C++
    UE_InitSampleHTML5: function () {
        UE_JSSampleHTML5.UE_InitSampleHTML5();
    },
    // persistant OBJECT accessible within JS code
    $UE_JSSampleHTML5: {
        UE_InitSampleHTML5: function () {
            console.log('UE_InitSampleHTML5');

            // Invoke C++ from JS
            this.Callback_RegisterStringFunction('Invoking callback!');
        }
    }
};

autoAddDeps(UE_SampleHTML5, '$UE_JSSampleHTML5');
mergeInto(LibraryManager.library, UE_SampleHTML5);
