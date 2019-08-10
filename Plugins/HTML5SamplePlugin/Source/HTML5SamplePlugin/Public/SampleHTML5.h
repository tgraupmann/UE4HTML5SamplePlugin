// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#pragma  once

extern "C" {
	void UE_InitSampleHTML5();
	// register function to call from JS
	void SampleHTML5_RegisterStringFunction(void(*listener)(const char* str));
}
