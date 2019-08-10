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
#ifdef __EMSCRIPTEN__
	/* register the listener */
	SampleHTML5_RegisterStringFunction(&Callback_RegisterStringFunction);
#endif

#if PLATFORM_HTML5
	UE_InitSampleHTML5();
#endif
}

void UHTML5SamplePluginBPLibrary::Callback_RegisterStringFunction(const char* str)
{
	UE_LOG(LogTemp, Log, TEXT("UHTML5SamplePluginBPLibrary::Callback_RegisterStringFunction invoked\r\n"));
}
