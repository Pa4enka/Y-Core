#if defined _inc_header
	#undef _inc_header
#endif

#if !defined Y_VEHICLE_ENABLED
	#error Player vehicles require Vehicles module to be enabled
#endif

#include <YSI\y_iterate>
#include <YSI\y_inline>
#include <YSI\y_commands>
#include <YSI\y_text>

enum E_PLAYER_VEHICLE {
	E_PLAYER_Vehicle_index
}

new
	PlayerVehicle[MAX_PLAYERS][Y_PLAYER_VEHICLE_MAX_OWNED][E_PLAYER_VEHICLE],
	Iterator:PlayerVehicle[MAX_PLAYERS]<Y_PLAYER_VEHICLE_MAX_OWNED>
;