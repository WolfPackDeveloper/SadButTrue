// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SadButTrue : ModuleRules
{
	public SadButTrue(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
		// GAmeplay Ability System
		PublicDependencyModuleNames.AddRange(new string[] { "GameplayAbilities", "GameplayTags", "GameplayTasks" });
        // AI Dependencies
        PublicDependencyModuleNames.AddRange(new string[] { "AIModule" });
        // UMG Dependencies
        PublicDependencyModuleNames.AddRange(new string[] { "UMG" });

        PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
