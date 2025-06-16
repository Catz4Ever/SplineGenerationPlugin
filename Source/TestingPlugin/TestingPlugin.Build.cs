// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestingPlugin : ModuleRules
{
	public TestingPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(new string[] { });

		PrivateIncludePaths.AddRange(new string[] { });

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"AssetRegistry"
				
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Projects",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"AssetRegistry"
				
			}
		);

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"UnrealEd",
				"Slate",
				"SlateCore",
				"EditorStyle",
				"ToolMenus",
				"InputCore",
				"PropertyEditor",
				"AssetRegistry",
				"ContentBrowser"
			});

            PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"AssetTools",
					"ToolMenus",
					"EditorStyle"
				}
			);
		}

        DynamicallyLoadedModuleNames.AddRange(new string[] { });
	}
}