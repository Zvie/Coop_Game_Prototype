// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Coop_Game_PrototypeTarget : TargetRules
{
	public Coop_Game_PrototypeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Coop_Game_Prototype" } );
	}
}
