// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Coop_Game_PrototypeEditorTarget : TargetRules
{
	public Coop_Game_PrototypeEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Coop_Game_Prototype" } );
	}
}
