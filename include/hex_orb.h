#ifndef GUARD_HEX_ORB_H
#define GUARD_HEX_ORB_H

#include "constants/hex_orb.h"

#define HEX_ORB_BLOCK_STATUS       FALSE // When TRUE, a Pokémon that is afflicted by a non-volatile status decision cannot get a status condition from the Hex Orb.

enum HexOrbResultCodes HexOrb_TryInflictStatus(struct Pokemon*, u32);
u32 HexOrb_ConvertMenuPosToStatus(u32);
void HexOrb_ConstructStatusFailureMessage(struct Pokemon*);
void HexOrb_ConstructSuccessMessage(struct Pokemon*, u32);
void HexOrb_ConstructAbilityFailureMessage(struct Pokemon*, u32);
void HexOrb_ConstructTypeFailureMessage(struct Pokemon*, u32, enum HexOrbResultCodes);
void Task_UseHexOrbFromField(u8);

#endif // GUARD_HEX_ORB_H
