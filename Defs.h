#pragma once

#ifndef Defs_h
#define Defs_h


enum Mission_Type
{
	Emergency=1,
	Polar,
	Mission_Type_CNT
};

enum Mission_Status
{
	Waiting,
	in_execution,
	completed,
	Mission_status_CNT
};

enum Event_Type
{
	Formulation
};

enum SystemMode
{
	interactive_mode = 1,
	silent_mode,
	step_by_step
};
#endif // !1
