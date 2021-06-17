//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//			Copyright 2016 (C) Bruno Xavier Leite
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "SlateBasics.h"
#include "SCUE4EditorStyle.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class FSCUE4EditorCommands : public TCommands<FSCUE4EditorCommands>
{
public:

	FSCUE4EditorCommands()
		: TCommands<FSCUE4EditorCommands>(TEXT("SCUE4Editor"), NSLOCTEXT("Contexts", "SCUE4Editor", "SCUE4Editor Plugin"), NAME_None, FSCUE4EditorStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////