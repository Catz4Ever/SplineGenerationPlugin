// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestingPlugin : ModuleRules
{
	public TestingPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "CoreUObject", "Engine", "InputCore", "Slate", "SlateCore", "EditorStyle", "KismetCompiler", "AssetTools","AssetRegistry"

            }
            );
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "Projects",
                "InputCore",
                "UnrealEd",
                "ToolMenus",
                "CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "UnrealEd", "LevelEditor", "ToolMenus","KismetCompiler", "AssetTools","AssetRegistry"

            }
            );


        DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
