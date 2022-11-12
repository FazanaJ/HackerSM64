#include "src/game/envfx_snow.h"

const GeoLayout ak47_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(LAYER_OPAQUE, get_ak47_colour),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ak47_Bone_001_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
