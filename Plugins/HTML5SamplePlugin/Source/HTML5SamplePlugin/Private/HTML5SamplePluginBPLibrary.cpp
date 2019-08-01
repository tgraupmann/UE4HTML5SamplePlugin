// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "HTML5SamplePluginBPLibrary.h"
#include "HTML5SamplePlugin.h"
#include "SampleHTML5.h"

UHTML5SamplePluginBPLibrary::UHTML5SamplePluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UHTML5SamplePluginBPLibrary::SampleInit()
{
#if PLATFORM_HTML5
	UE_InitSampleHTML5();
#endif
}
