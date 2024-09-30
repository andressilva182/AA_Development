// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AA_Development : ModuleRules
{
	public AA_Development(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
