// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE4HTML5SamplePluginEditorTarget : TargetRules
{
	public UE4HTML5SamplePluginEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "UE4HTML5SamplePlugin" } );
	}
}
