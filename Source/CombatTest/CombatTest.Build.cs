// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CombatTest : ModuleRules
{
	public CombatTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] 
        { "Core"
        , "CoreUObject"
        , "Engine"
        , "InputCore"
        , "HeadMountedDisplay"
        , "NavigationSystem"
        , "AIModule"
        , "GameplayAbilities"
        , "GameplayTasks"});
    }
}
