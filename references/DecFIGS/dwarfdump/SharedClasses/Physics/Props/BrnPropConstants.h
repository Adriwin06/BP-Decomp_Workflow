// Wheel.h:30
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// BrnPropConstants.h:104
		const uint32_t KU_MAX_PROPS_TO_UPDATE = 100;

		// BrnPropConstants.h:106
		const uint8_t KU_DEFAULT_ROTATION = 127;

		// BrnPropConstants.h:109
		const uint32_t KU_MAX_PROP_STATES = 4;

		// BrnPropConstants.h:112
		const uint32_t KU_MAX_PROP_STATE_TRANSFERS = 3;

		// BrnPropConstants.h:116
		const uint32_t KU_MAX_PROP_COLLISION_EVENTS = 7;

		// BrnPropConstants.h:119
		const uint32_t KU_MAX_PROP_TYPES = 500;

		// BrnPropConstants.h:122
		const uint32_t KU_MAX_PROP_PART_TYPES = 300;

		// BrnPropConstants.h:125
		const uint32_t KU_MAX_LOADED_ZONES = 9;

		// BrnPropConstants.h:128
		const uint32_t KU_MAX_PROP_INSTANCES_PER_ZONE = 600;

		// BrnPropConstants.h:131
		const uint32_t KU_MAX_PROP_PARTS_PER_ZONE = 500;

		// BrnPropConstants.h:134
		const uint32_t KU_MAX_LOADED_PROP_INSTANCES = 5400;

		// BrnPropConstants.h:137
		const uint32_t KU_MAX_LOADED_PART_INSTANCES = 4500;

		// BrnPropConstants.h:140
		const int32_t KI_MAX_ZONES_TO_UNLOAD = 2;

		// BrnPropConstants.h:143
		const int32_t KI_MAX_ZONES_TO_LOAD = 2;

		// BrnPropConstants.h:146
		const uint32_t KU_MAX_LOADED_PROPS_AND_PARTS = 9900;

		// BrnPropConstants.h:149
		const uint32_t KU_MAX_COLLIDABLE_PROPS = 1000;

		// BrnPropConstants.h:152
		const uint32_t KU_MAX_PHYSICAL_PROPS = 15;

		// BrnPropConstants.h:155
		const uint32_t KU_MAX_PHYSICAL_PROP_PARTS = 30;

		// BrnPropConstants.h:158
		const uint32_t KU_MAX_ZONES = 500;

		// BrnPropConstants.h:161
		const uint32_t KU_MAX_PROP_PARTS_PER_PROP = 30;

		// BrnPropConstants.h:164
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PROP = 30;

		// BrnPropConstants.h:167
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PART = 10;

		// BrnPropConstants.h:169
		const int32_t KI_MAX_JOINTED_PROPS = 15;

		// BrnPropConstants.h:171
		const uint32_t KU_MAX_PROP_COLLISION_VOLUMES_IN_SCENE = 3200;

		// BrnPropConstants.h:172
		const uint32_t KU_MAX_PROP_ENTITIES_IN_SCENE = 7500;

		// BrnPropConstants.h:174
		const uint32_t KU_MAX_NON_PERSISTENT_PROPS_PER_ZONE = 600;

		// BrnPropConstants.h:176
		const VecFloat KVF_PROP_FLOOR;

		// BrnPropConstants.h:179
		const int32_t KI_WORLD_X_EXTENT = 10000;

		// BrnPropConstants.h:180
		const int32_t KI_WORLD_Z_EXTENT = 10000;

		// BrnPropConstants.h:181
		const int32_t KI_WORLD_X_HALF_EXTENT = 5000;

		// BrnPropConstants.h:182
		const int32_t KI_WORLD_Z_HALF_EXTENT = 5000;

		// BrnPropConstants.h:183
		const int32_t KI_CELL_WIDTH = 100;

		// BrnPropConstants.h:184
		const int32_t KI_CELL_DEPTH = 100;

		// BrnPropConstants.h:185
		const int32_t KI_MAX_CELL_X = 100;

		// BrnPropConstants.h:186
		const int32_t KI_MAX_CELL_Z = 100;

		// BrnPropConstants.h:187
		const int32_t KI_NUM_PROP_CELLS = 10000;

		// BrnPropConstants.h:188
		const int32_t KU_MAX_LOADED_PROP_CELLS = 150;

		// BrnPropConstants.h:189
		const int32_t KU_MAX_ACTIVE_CELLS = 4;

		// BrnPropConstants.h:195
		const int32_t KI_MAX_NUM_HIT_PROPS_TO_SAVE = 1000;

		// BrnPropConstants.h:197
		const uint32_t KU_MAX_TRAFFIC_KNOCKDOWN_EVENTS = 32;

		// BrnPropConstants.h:198
		const uint32_t KU_MAX_TRAFFIC_RESTORE_EVENTS = 80;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		struct PropPartTypeData;

		struct PropTypeData;

		struct AddPhysicalPropEvent;

		struct AddPhysicalPartEvent;

		struct RemovePhysicalPropEvent;

		struct RemovePhysicalPartEvent;

		struct PropPhysicsDataHeader;

		struct PropInputInterface;

		// BrnPropConstants.h:104
		const uint32_t KU_MAX_PROPS_TO_UPDATE = 100;

		// BrnPropConstants.h:106
		const uint8_t KU_DEFAULT_ROTATION = 127;

		// BrnPropConstants.h:109
		const uint32_t KU_MAX_PROP_STATES = 4;

		// BrnPropConstants.h:112
		const uint32_t KU_MAX_PROP_STATE_TRANSFERS = 3;

		// BrnPropConstants.h:116
		const uint32_t KU_MAX_PROP_COLLISION_EVENTS = 7;

		// BrnPropConstants.h:119
		const uint32_t KU_MAX_PROP_TYPES = 500;

		// BrnPropConstants.h:122
		const uint32_t KU_MAX_PROP_PART_TYPES = 300;

		// BrnPropConstants.h:125
		const uint32_t KU_MAX_LOADED_ZONES = 9;

		// BrnPropConstants.h:128
		const uint32_t KU_MAX_PROP_INSTANCES_PER_ZONE = 600;

		// BrnPropConstants.h:131
		const uint32_t KU_MAX_PROP_PARTS_PER_ZONE = 500;

		// BrnPropConstants.h:134
		const uint32_t KU_MAX_LOADED_PROP_INSTANCES = 5400;

		// BrnPropConstants.h:137
		const uint32_t KU_MAX_LOADED_PART_INSTANCES = 4500;

		// BrnPropConstants.h:140
		const int32_t KI_MAX_ZONES_TO_UNLOAD = 2;

		// BrnPropConstants.h:143
		const int32_t KI_MAX_ZONES_TO_LOAD = 2;

		// BrnPropConstants.h:146
		const uint32_t KU_MAX_LOADED_PROPS_AND_PARTS = 9900;

		// BrnPropConstants.h:149
		const uint32_t KU_MAX_COLLIDABLE_PROPS = 1000;

		// BrnPropConstants.h:152
		const uint32_t KU_MAX_PHYSICAL_PROPS = 15;

		// BrnPropConstants.h:155
		const uint32_t KU_MAX_PHYSICAL_PROP_PARTS = 30;

		// BrnPropConstants.h:158
		const uint32_t KU_MAX_ZONES = 500;

		// BrnPropConstants.h:161
		const uint32_t KU_MAX_PROP_PARTS_PER_PROP = 30;

		// BrnPropConstants.h:164
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PROP = 30;

		// BrnPropConstants.h:167
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PART = 10;

		// BrnPropConstants.h:169
		const int32_t KI_MAX_JOINTED_PROPS = 15;

		// BrnPropConstants.h:171
		const uint32_t KU_MAX_PROP_COLLISION_VOLUMES_IN_SCENE = 3200;

		// BrnPropConstants.h:172
		const uint32_t KU_MAX_PROP_ENTITIES_IN_SCENE = 7500;

		// BrnPropConstants.h:174
		const uint32_t KU_MAX_NON_PERSISTENT_PROPS_PER_ZONE = 600;

		// BrnPropConstants.h:176
		const VecFloat KVF_PROP_FLOOR;

		// BrnPropConstants.h:179
		const int32_t KI_WORLD_X_EXTENT = 10000;

		// BrnPropConstants.h:180
		const int32_t KI_WORLD_Z_EXTENT = 10000;

		// BrnPropConstants.h:181
		const int32_t KI_WORLD_X_HALF_EXTENT = 5000;

		// BrnPropConstants.h:182
		const int32_t KI_WORLD_Z_HALF_EXTENT = 5000;

		// BrnPropConstants.h:183
		const int32_t KI_CELL_WIDTH = 100;

		// BrnPropConstants.h:184
		const int32_t KI_CELL_DEPTH = 100;

		// BrnPropConstants.h:185
		const int32_t KI_MAX_CELL_X = 100;

		// BrnPropConstants.h:186
		const int32_t KI_MAX_CELL_Z = 100;

		// BrnPropConstants.h:187
		const int32_t KI_NUM_PROP_CELLS = 10000;

		// BrnPropConstants.h:188
		const int32_t KU_MAX_LOADED_PROP_CELLS = 150;

		// BrnPropConstants.h:189
		const int32_t KU_MAX_ACTIVE_CELLS = 4;

		// BrnPropConstants.h:195
		const int32_t KI_MAX_NUM_HIT_PROPS_TO_SAVE = 1000;

		// BrnPropConstants.h:197
		const uint32_t KU_MAX_TRAFFIC_KNOCKDOWN_EVENTS = 32;

		// BrnPropConstants.h:198
		const uint32_t KU_MAX_TRAFFIC_RESTORE_EVENTS = 80;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		struct PropPartTypeData;

		struct PropTypeData;

		struct PropInstanceData;

		struct AddPhysicalPropEvent;

		struct AddPhysicalPartEvent;

		struct UpdatePropEvent;

		struct RemovePhysicalPropEvent;

		struct RemovePhysicalPartEvent;

		struct PropUpdateNotification;

		struct PropPhysicsDataHeader;

		struct PropInputInterface;

		struct PropOutputInterface;

		struct PropCellId;

		struct PropCellData;

		struct PropZoneData;

		struct PropGraphics;

		struct PropPartGraphics;

		struct PropGraphicsList;

		// BrnPropConstants.h:104
		const uint32_t KU_MAX_PROPS_TO_UPDATE = 100;

		// BrnPropConstants.h:106
		const uint8_t KU_DEFAULT_ROTATION = 127;

		// BrnPropConstants.h:109
		const uint32_t KU_MAX_PROP_STATES = 4;

		// BrnPropConstants.h:112
		const uint32_t KU_MAX_PROP_STATE_TRANSFERS = 3;

		// BrnPropConstants.h:116
		const uint32_t KU_MAX_PROP_COLLISION_EVENTS = 7;

		// BrnPropConstants.h:119
		const uint32_t KU_MAX_PROP_TYPES = 500;

		// BrnPropConstants.h:122
		const uint32_t KU_MAX_PROP_PART_TYPES = 300;

		// BrnPropConstants.h:125
		const uint32_t KU_MAX_LOADED_ZONES = 9;

		// BrnPropConstants.h:128
		const uint32_t KU_MAX_PROP_INSTANCES_PER_ZONE = 600;

		// BrnPropConstants.h:131
		const uint32_t KU_MAX_PROP_PARTS_PER_ZONE = 500;

		// BrnPropConstants.h:134
		const uint32_t KU_MAX_LOADED_PROP_INSTANCES = 5400;

		// BrnPropConstants.h:137
		const uint32_t KU_MAX_LOADED_PART_INSTANCES = 4500;

		// BrnPropConstants.h:140
		const int32_t KI_MAX_ZONES_TO_UNLOAD = 2;

		// BrnPropConstants.h:143
		const int32_t KI_MAX_ZONES_TO_LOAD = 2;

		// BrnPropConstants.h:146
		const uint32_t KU_MAX_LOADED_PROPS_AND_PARTS = 9900;

		// BrnPropConstants.h:149
		const uint32_t KU_MAX_COLLIDABLE_PROPS = 1000;

		// BrnPropConstants.h:152
		const uint32_t KU_MAX_PHYSICAL_PROPS = 15;

		// BrnPropConstants.h:155
		const uint32_t KU_MAX_PHYSICAL_PROP_PARTS = 30;

		// BrnPropConstants.h:158
		const uint32_t KU_MAX_ZONES = 500;

		// BrnPropConstants.h:161
		const uint32_t KU_MAX_PROP_PARTS_PER_PROP = 30;

		// BrnPropConstants.h:164
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PROP = 30;

		// BrnPropConstants.h:167
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PART = 10;

		// BrnPropConstants.h:169
		const int32_t KI_MAX_JOINTED_PROPS = 15;

		// BrnPropConstants.h:171
		const uint32_t KU_MAX_PROP_COLLISION_VOLUMES_IN_SCENE = 3200;

		// BrnPropConstants.h:172
		const uint32_t KU_MAX_PROP_ENTITIES_IN_SCENE = 7500;

		// BrnPropConstants.h:174
		const uint32_t KU_MAX_NON_PERSISTENT_PROPS_PER_ZONE = 600;

		// BrnPropConstants.h:176
		const VecFloat KVF_PROP_FLOOR;

		// BrnPropConstants.h:179
		const int32_t KI_WORLD_X_EXTENT = 10000;

		// BrnPropConstants.h:180
		const int32_t KI_WORLD_Z_EXTENT = 10000;

		// BrnPropConstants.h:181
		const int32_t KI_WORLD_X_HALF_EXTENT = 5000;

		// BrnPropConstants.h:182
		const int32_t KI_WORLD_Z_HALF_EXTENT = 5000;

		// BrnPropConstants.h:183
		const int32_t KI_CELL_WIDTH = 100;

		// BrnPropConstants.h:184
		const int32_t KI_CELL_DEPTH = 100;

		// BrnPropConstants.h:185
		const int32_t KI_MAX_CELL_X = 100;

		// BrnPropConstants.h:186
		const int32_t KI_MAX_CELL_Z = 100;

		// BrnPropConstants.h:187
		const int32_t KI_NUM_PROP_CELLS = 10000;

		// BrnPropConstants.h:188
		const int32_t KU_MAX_LOADED_PROP_CELLS = 150;

		// BrnPropConstants.h:189
		const int32_t KU_MAX_ACTIVE_CELLS = 4;

		// BrnPropConstants.h:195
		const int32_t KI_MAX_NUM_HIT_PROPS_TO_SAVE = 1000;

		// BrnPropConstants.h:197
		const uint32_t KU_MAX_TRAFFIC_KNOCKDOWN_EVENTS = 32;

		// BrnPropConstants.h:198
		const uint32_t KU_MAX_TRAFFIC_RESTORE_EVENTS = 80;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// BrnPropConstants.h:104
		const uint32_t KU_MAX_PROPS_TO_UPDATE = 100;

		// BrnPropConstants.h:106
		const uint8_t KU_DEFAULT_ROTATION = 127;

		// BrnPropConstants.h:109
		const uint32_t KU_MAX_PROP_STATES = 4;

		// BrnPropConstants.h:112
		const uint32_t KU_MAX_PROP_STATE_TRANSFERS = 3;

		// BrnPropConstants.h:116
		const uint32_t KU_MAX_PROP_COLLISION_EVENTS = 7;

		// BrnPropConstants.h:119
		const uint32_t KU_MAX_PROP_TYPES = 500;

		// BrnPropConstants.h:122
		const uint32_t KU_MAX_PROP_PART_TYPES = 300;

		// BrnPropConstants.h:125
		const uint32_t KU_MAX_LOADED_ZONES = 9;

		// BrnPropConstants.h:128
		const uint32_t KU_MAX_PROP_INSTANCES_PER_ZONE = 600;

		// BrnPropConstants.h:131
		const uint32_t KU_MAX_PROP_PARTS_PER_ZONE = 500;

		// BrnPropConstants.h:134
		const uint32_t KU_MAX_LOADED_PROP_INSTANCES = 5400;

		// BrnPropConstants.h:137
		const uint32_t KU_MAX_LOADED_PART_INSTANCES = 4500;

		// BrnPropConstants.h:140
		const int32_t KI_MAX_ZONES_TO_UNLOAD = 2;

		// BrnPropConstants.h:143
		const int32_t KI_MAX_ZONES_TO_LOAD = 2;

		// BrnPropConstants.h:146
		const uint32_t KU_MAX_LOADED_PROPS_AND_PARTS = 9900;

		// BrnPropConstants.h:149
		const uint32_t KU_MAX_COLLIDABLE_PROPS = 1000;

		// BrnPropConstants.h:152
		const uint32_t KU_MAX_PHYSICAL_PROPS = 15;

		// BrnPropConstants.h:155
		const uint32_t KU_MAX_PHYSICAL_PROP_PARTS = 30;

		// BrnPropConstants.h:158
		const uint32_t KU_MAX_ZONES = 500;

		// BrnPropConstants.h:161
		const uint32_t KU_MAX_PROP_PARTS_PER_PROP = 30;

		// BrnPropConstants.h:164
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PROP = 30;

		// BrnPropConstants.h:167
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PART = 10;

		// BrnPropConstants.h:169
		const int32_t KI_MAX_JOINTED_PROPS = 15;

		// BrnPropConstants.h:171
		const uint32_t KU_MAX_PROP_COLLISION_VOLUMES_IN_SCENE = 3200;

		// BrnPropConstants.h:172
		const uint32_t KU_MAX_PROP_ENTITIES_IN_SCENE = 7500;

		// BrnPropConstants.h:174
		const uint32_t KU_MAX_NON_PERSISTENT_PROPS_PER_ZONE = 600;

		// BrnPropConstants.h:176
		const VecFloat KVF_PROP_FLOOR;

		// BrnPropConstants.h:179
		const int32_t KI_WORLD_X_EXTENT = 10000;

		// BrnPropConstants.h:180
		const int32_t KI_WORLD_Z_EXTENT = 10000;

		// BrnPropConstants.h:181
		const int32_t KI_WORLD_X_HALF_EXTENT = 5000;

		// BrnPropConstants.h:182
		const int32_t KI_WORLD_Z_HALF_EXTENT = 5000;

		// BrnPropConstants.h:183
		const int32_t KI_CELL_WIDTH = 100;

		// BrnPropConstants.h:184
		const int32_t KI_CELL_DEPTH = 100;

		// BrnPropConstants.h:185
		const int32_t KI_MAX_CELL_X = 100;

		// BrnPropConstants.h:186
		const int32_t KI_MAX_CELL_Z = 100;

		// BrnPropConstants.h:187
		const int32_t KI_NUM_PROP_CELLS = 10000;

		// BrnPropConstants.h:188
		const int32_t KU_MAX_LOADED_PROP_CELLS = 150;

		// BrnPropConstants.h:189
		const int32_t KU_MAX_ACTIVE_CELLS = 4;

		// BrnPropConstants.h:195
		const int32_t KI_MAX_NUM_HIT_PROPS_TO_SAVE = 1000;

		// BrnPropConstants.h:197
		const uint32_t KU_MAX_TRAFFIC_KNOCKDOWN_EVENTS = 32;

		// BrnPropConstants.h:198
		const uint32_t KU_MAX_TRAFFIC_RESTORE_EVENTS = 80;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		struct AddPhysicalPropEvent;

		struct AddPhysicalPartEvent;

		struct UpdatePropEvent;

		struct RemovePhysicalPropEvent;

		struct RemovePhysicalPartEvent;

		struct PropUpdateNotification;

		struct PropInputInterface;

		struct PropOutputInterface;

		// BrnPropConstants.h:104
		const uint32_t KU_MAX_PROPS_TO_UPDATE = 100;

		// BrnPropConstants.h:106
		const uint8_t KU_DEFAULT_ROTATION = 127;

		// BrnPropConstants.h:109
		const uint32_t KU_MAX_PROP_STATES = 4;

		// BrnPropConstants.h:112
		const uint32_t KU_MAX_PROP_STATE_TRANSFERS = 3;

		// BrnPropConstants.h:116
		const uint32_t KU_MAX_PROP_COLLISION_EVENTS = 7;

		// BrnPropConstants.h:119
		const uint32_t KU_MAX_PROP_TYPES = 500;

		// BrnPropConstants.h:122
		const uint32_t KU_MAX_PROP_PART_TYPES = 300;

		// BrnPropConstants.h:125
		const uint32_t KU_MAX_LOADED_ZONES = 9;

		// BrnPropConstants.h:128
		const uint32_t KU_MAX_PROP_INSTANCES_PER_ZONE = 600;

		// BrnPropConstants.h:131
		const uint32_t KU_MAX_PROP_PARTS_PER_ZONE = 500;

		// BrnPropConstants.h:134
		const uint32_t KU_MAX_LOADED_PROP_INSTANCES = 5400;

		// BrnPropConstants.h:137
		const uint32_t KU_MAX_LOADED_PART_INSTANCES = 4500;

		// BrnPropConstants.h:140
		const int32_t KI_MAX_ZONES_TO_UNLOAD = 2;

		// BrnPropConstants.h:143
		const int32_t KI_MAX_ZONES_TO_LOAD = 2;

		// BrnPropConstants.h:146
		const uint32_t KU_MAX_LOADED_PROPS_AND_PARTS = 9900;

		// BrnPropConstants.h:149
		const uint32_t KU_MAX_COLLIDABLE_PROPS = 1000;

		// BrnPropConstants.h:152
		const uint32_t KU_MAX_PHYSICAL_PROPS = 15;

		// BrnPropConstants.h:155
		const uint32_t KU_MAX_PHYSICAL_PROP_PARTS = 30;

		// BrnPropConstants.h:158
		const uint32_t KU_MAX_ZONES = 500;

		// BrnPropConstants.h:161
		const uint32_t KU_MAX_PROP_PARTS_PER_PROP = 30;

		// BrnPropConstants.h:164
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PROP = 30;

		// BrnPropConstants.h:167
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PART = 10;

		// BrnPropConstants.h:169
		const int32_t KI_MAX_JOINTED_PROPS = 15;

		// BrnPropConstants.h:171
		const uint32_t KU_MAX_PROP_COLLISION_VOLUMES_IN_SCENE = 3200;

		// BrnPropConstants.h:172
		const uint32_t KU_MAX_PROP_ENTITIES_IN_SCENE = 7500;

		// BrnPropConstants.h:174
		const uint32_t KU_MAX_NON_PERSISTENT_PROPS_PER_ZONE = 600;

		// BrnPropConstants.h:176
		const VecFloat KVF_PROP_FLOOR;

		// BrnPropConstants.h:179
		const int32_t KI_WORLD_X_EXTENT = 10000;

		// BrnPropConstants.h:180
		const int32_t KI_WORLD_Z_EXTENT = 10000;

		// BrnPropConstants.h:181
		const int32_t KI_WORLD_X_HALF_EXTENT = 5000;

		// BrnPropConstants.h:182
		const int32_t KI_WORLD_Z_HALF_EXTENT = 5000;

		// BrnPropConstants.h:183
		const int32_t KI_CELL_WIDTH = 100;

		// BrnPropConstants.h:184
		const int32_t KI_CELL_DEPTH = 100;

		// BrnPropConstants.h:185
		const int32_t KI_MAX_CELL_X = 100;

		// BrnPropConstants.h:186
		const int32_t KI_MAX_CELL_Z = 100;

		// BrnPropConstants.h:187
		const int32_t KI_NUM_PROP_CELLS = 10000;

		// BrnPropConstants.h:188
		const int32_t KU_MAX_LOADED_PROP_CELLS = 150;

		// BrnPropConstants.h:189
		const int32_t KU_MAX_ACTIVE_CELLS = 4;

		// BrnPropConstants.h:195
		const int32_t KI_MAX_NUM_HIT_PROPS_TO_SAVE = 1000;

		// BrnPropConstants.h:197
		const uint32_t KU_MAX_TRAFFIC_KNOCKDOWN_EVENTS = 32;

		// BrnPropConstants.h:198
		const uint32_t KU_MAX_TRAFFIC_RESTORE_EVENTS = 80;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		struct PropPartTypeData;

		struct PropTypeData;

		struct AddPhysicalPropEvent;

		struct AddPhysicalPartEvent;

		struct UpdatePropEvent;

		struct RemovePhysicalPropEvent;

		struct RemovePhysicalPartEvent;

		struct PropUpdateNotification;

		struct PropPhysicsDataHeader;

		struct PropInputInterface;

		struct PropOutputInterface;

		struct PropInstance;

		struct PropPartInstance;

		struct PropRaceCarContact;

		struct PropRaceCarContactBuffer;

		struct PropDebugComponent;

		// BrnPropConstants.h:104
		const uint32_t KU_MAX_PROPS_TO_UPDATE = 100;

		// BrnPropConstants.h:106
		const uint8_t KU_DEFAULT_ROTATION = 127;

		// BrnPropConstants.h:109
		const uint32_t KU_MAX_PROP_STATES = 4;

		// BrnPropConstants.h:112
		const uint32_t KU_MAX_PROP_STATE_TRANSFERS = 3;

		// BrnPropConstants.h:116
		const uint32_t KU_MAX_PROP_COLLISION_EVENTS = 7;

		// BrnPropConstants.h:119
		const uint32_t KU_MAX_PROP_TYPES = 500;

		// BrnPropConstants.h:122
		const uint32_t KU_MAX_PROP_PART_TYPES = 300;

		// BrnPropConstants.h:125
		const uint32_t KU_MAX_LOADED_ZONES = 9;

		// BrnPropConstants.h:128
		const uint32_t KU_MAX_PROP_INSTANCES_PER_ZONE = 600;

		// BrnPropConstants.h:131
		const uint32_t KU_MAX_PROP_PARTS_PER_ZONE = 500;

		// BrnPropConstants.h:134
		const uint32_t KU_MAX_LOADED_PROP_INSTANCES = 5400;

		// BrnPropConstants.h:137
		const uint32_t KU_MAX_LOADED_PART_INSTANCES = 4500;

		// BrnPropConstants.h:140
		const int32_t KI_MAX_ZONES_TO_UNLOAD = 2;

		// BrnPropConstants.h:143
		const int32_t KI_MAX_ZONES_TO_LOAD = 2;

		// BrnPropConstants.h:146
		const uint32_t KU_MAX_LOADED_PROPS_AND_PARTS = 9900;

		// BrnPropConstants.h:149
		const uint32_t KU_MAX_COLLIDABLE_PROPS = 1000;

		// BrnPropConstants.h:152
		const uint32_t KU_MAX_PHYSICAL_PROPS = 15;

		// BrnPropConstants.h:155
		const uint32_t KU_MAX_PHYSICAL_PROP_PARTS = 30;

		// BrnPropConstants.h:158
		const uint32_t KU_MAX_ZONES = 500;

		// BrnPropConstants.h:161
		const uint32_t KU_MAX_PROP_PARTS_PER_PROP = 30;

		// BrnPropConstants.h:164
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PROP = 30;

		// BrnPropConstants.h:167
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PART = 10;

		// BrnPropConstants.h:169
		const int32_t KI_MAX_JOINTED_PROPS = 15;

		// BrnPropConstants.h:171
		const uint32_t KU_MAX_PROP_COLLISION_VOLUMES_IN_SCENE = 3200;

		// BrnPropConstants.h:172
		const uint32_t KU_MAX_PROP_ENTITIES_IN_SCENE = 7500;

		// BrnPropConstants.h:174
		const uint32_t KU_MAX_NON_PERSISTENT_PROPS_PER_ZONE = 600;

		// BrnPropConstants.h:176
		const VecFloat KVF_PROP_FLOOR;

		// BrnPropConstants.h:179
		const int32_t KI_WORLD_X_EXTENT = 10000;

		// BrnPropConstants.h:180
		const int32_t KI_WORLD_Z_EXTENT = 10000;

		// BrnPropConstants.h:181
		const int32_t KI_WORLD_X_HALF_EXTENT = 5000;

		// BrnPropConstants.h:182
		const int32_t KI_WORLD_Z_HALF_EXTENT = 5000;

		// BrnPropConstants.h:183
		const int32_t KI_CELL_WIDTH = 100;

		// BrnPropConstants.h:184
		const int32_t KI_CELL_DEPTH = 100;

		// BrnPropConstants.h:185
		const int32_t KI_MAX_CELL_X = 100;

		// BrnPropConstants.h:186
		const int32_t KI_MAX_CELL_Z = 100;

		// BrnPropConstants.h:187
		const int32_t KI_NUM_PROP_CELLS = 10000;

		// BrnPropConstants.h:188
		const int32_t KU_MAX_LOADED_PROP_CELLS = 150;

		// BrnPropConstants.h:189
		const int32_t KU_MAX_ACTIVE_CELLS = 4;

		// BrnPropConstants.h:195
		const int32_t KI_MAX_NUM_HIT_PROPS_TO_SAVE = 1000;

		// BrnPropConstants.h:197
		const uint32_t KU_MAX_TRAFFIC_KNOCKDOWN_EVENTS = 32;

		// BrnPropConstants.h:198
		const uint32_t KU_MAX_TRAFFIC_RESTORE_EVENTS = 80;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// Declaration
		struct PropPhysicsResourceType {
		public:
			PropPhysicsResourceType();

		}

		// Declaration
		struct PropGraphicsListResourceType {
		public:
			PropGraphicsListResourceType();

		}

		// Declaration
		struct PropInstanceDataResourceType {
		public:
			PropInstanceDataResourceType();

		}

		// BrnPropConstants.h:104
		const uint32_t KU_MAX_PROPS_TO_UPDATE = 100;

		// BrnPropConstants.h:106
		const uint8_t KU_DEFAULT_ROTATION = 127;

		// BrnPropConstants.h:109
		const uint32_t KU_MAX_PROP_STATES = 4;

		// BrnPropConstants.h:112
		const uint32_t KU_MAX_PROP_STATE_TRANSFERS = 3;

		// BrnPropConstants.h:116
		const uint32_t KU_MAX_PROP_COLLISION_EVENTS = 7;

		// BrnPropConstants.h:119
		const uint32_t KU_MAX_PROP_TYPES = 500;

		// BrnPropConstants.h:122
		const uint32_t KU_MAX_PROP_PART_TYPES = 300;

		// BrnPropConstants.h:125
		const uint32_t KU_MAX_LOADED_ZONES = 9;

		// BrnPropConstants.h:128
		const uint32_t KU_MAX_PROP_INSTANCES_PER_ZONE = 600;

		// BrnPropConstants.h:131
		const uint32_t KU_MAX_PROP_PARTS_PER_ZONE = 500;

		// BrnPropConstants.h:134
		const uint32_t KU_MAX_LOADED_PROP_INSTANCES = 5400;

		// BrnPropConstants.h:137
		const uint32_t KU_MAX_LOADED_PART_INSTANCES = 4500;

		// BrnPropConstants.h:140
		const int32_t KI_MAX_ZONES_TO_UNLOAD = 2;

		// BrnPropConstants.h:143
		const int32_t KI_MAX_ZONES_TO_LOAD = 2;

		// BrnPropConstants.h:146
		const uint32_t KU_MAX_LOADED_PROPS_AND_PARTS = 9900;

		// BrnPropConstants.h:149
		const uint32_t KU_MAX_COLLIDABLE_PROPS = 1000;

		// BrnPropConstants.h:152
		const uint32_t KU_MAX_PHYSICAL_PROPS = 15;

		// BrnPropConstants.h:155
		const uint32_t KU_MAX_PHYSICAL_PROP_PARTS = 30;

		// BrnPropConstants.h:158
		const uint32_t KU_MAX_ZONES = 500;

		// BrnPropConstants.h:161
		const uint32_t KU_MAX_PROP_PARTS_PER_PROP = 30;

		// BrnPropConstants.h:164
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PROP = 30;

		// BrnPropConstants.h:167
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PART = 10;

		// BrnPropConstants.h:169
		const int32_t KI_MAX_JOINTED_PROPS = 15;

		// BrnPropConstants.h:171
		const uint32_t KU_MAX_PROP_COLLISION_VOLUMES_IN_SCENE = 3200;

		// BrnPropConstants.h:172
		const uint32_t KU_MAX_PROP_ENTITIES_IN_SCENE = 7500;

		// BrnPropConstants.h:174
		const uint32_t KU_MAX_NON_PERSISTENT_PROPS_PER_ZONE = 600;

		// BrnPropConstants.h:176
		const VecFloat KVF_PROP_FLOOR;

		// BrnPropConstants.h:179
		const int32_t KI_WORLD_X_EXTENT = 10000;

		// BrnPropConstants.h:180
		const int32_t KI_WORLD_Z_EXTENT = 10000;

		// BrnPropConstants.h:181
		const int32_t KI_WORLD_X_HALF_EXTENT = 5000;

		// BrnPropConstants.h:182
		const int32_t KI_WORLD_Z_HALF_EXTENT = 5000;

		// BrnPropConstants.h:183
		const int32_t KI_CELL_WIDTH = 100;

		// BrnPropConstants.h:184
		const int32_t KI_CELL_DEPTH = 100;

		// BrnPropConstants.h:185
		const int32_t KI_MAX_CELL_X = 100;

		// BrnPropConstants.h:186
		const int32_t KI_MAX_CELL_Z = 100;

		// BrnPropConstants.h:187
		const int32_t KI_NUM_PROP_CELLS = 10000;

		// BrnPropConstants.h:188
		const int32_t KU_MAX_LOADED_PROP_CELLS = 150;

		// BrnPropConstants.h:189
		const int32_t KU_MAX_ACTIVE_CELLS = 4;

		// BrnPropConstants.h:195
		const int32_t KI_MAX_NUM_HIT_PROPS_TO_SAVE = 1000;

		// BrnPropConstants.h:197
		const uint32_t KU_MAX_TRAFFIC_KNOCKDOWN_EVENTS = 32;

		// BrnPropConstants.h:198
		const uint32_t KU_MAX_TRAFFIC_RESTORE_EVENTS = 80;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		struct PropPartTypeData;

		struct PropTypeData;

		struct PropInstanceData;

		struct PropPhysicsDataHeader;

		struct FixableVolume;

		struct PropPartGraphics;

		struct PropGraphics;

		struct PropGraphicsList;

		struct PropCellId;

		struct PropCellData;

		struct PropZoneData;

		struct PropPhysicsData;

		struct PropInstanceDataResourceType;

		struct PropGraphicsListResourceType;

		struct PropPhysicsResourceType;

		// BrnPropConstants.h:104
		const uint32_t KU_MAX_PROPS_TO_UPDATE = 100;

		// BrnPropConstants.h:106
		const uint8_t KU_DEFAULT_ROTATION = 127;

		// BrnPropConstants.h:109
		const uint32_t KU_MAX_PROP_STATES = 4;

		// BrnPropConstants.h:112
		const uint32_t KU_MAX_PROP_STATE_TRANSFERS = 3;

		// BrnPropConstants.h:116
		const uint32_t KU_MAX_PROP_COLLISION_EVENTS = 7;

		// BrnPropConstants.h:119
		const uint32_t KU_MAX_PROP_TYPES = 500;

		// BrnPropConstants.h:122
		const uint32_t KU_MAX_PROP_PART_TYPES = 300;

		// BrnPropConstants.h:125
		const uint32_t KU_MAX_LOADED_ZONES = 9;

		// BrnPropConstants.h:128
		const uint32_t KU_MAX_PROP_INSTANCES_PER_ZONE = 600;

		// BrnPropConstants.h:131
		const uint32_t KU_MAX_PROP_PARTS_PER_ZONE = 500;

		// BrnPropConstants.h:134
		const uint32_t KU_MAX_LOADED_PROP_INSTANCES = 5400;

		// BrnPropConstants.h:137
		const uint32_t KU_MAX_LOADED_PART_INSTANCES = 4500;

		// BrnPropConstants.h:140
		const int32_t KI_MAX_ZONES_TO_UNLOAD = 2;

		// BrnPropConstants.h:143
		const int32_t KI_MAX_ZONES_TO_LOAD = 2;

		// BrnPropConstants.h:146
		const uint32_t KU_MAX_LOADED_PROPS_AND_PARTS = 9900;

		// BrnPropConstants.h:149
		const uint32_t KU_MAX_COLLIDABLE_PROPS = 1000;

		// BrnPropConstants.h:152
		const uint32_t KU_MAX_PHYSICAL_PROPS = 15;

		// BrnPropConstants.h:155
		const uint32_t KU_MAX_PHYSICAL_PROP_PARTS = 30;

		// BrnPropConstants.h:158
		const uint32_t KU_MAX_ZONES = 500;

		// BrnPropConstants.h:161
		const uint32_t KU_MAX_PROP_PARTS_PER_PROP = 30;

		// BrnPropConstants.h:164
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PROP = 30;

		// BrnPropConstants.h:167
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PART = 10;

		// BrnPropConstants.h:169
		const int32_t KI_MAX_JOINTED_PROPS = 15;

		// BrnPropConstants.h:171
		const uint32_t KU_MAX_PROP_COLLISION_VOLUMES_IN_SCENE = 3200;

		// BrnPropConstants.h:172
		const uint32_t KU_MAX_PROP_ENTITIES_IN_SCENE = 7500;

		// BrnPropConstants.h:174
		const uint32_t KU_MAX_NON_PERSISTENT_PROPS_PER_ZONE = 600;

		// BrnPropConstants.h:176
		const VecFloat KVF_PROP_FLOOR;

		// BrnPropConstants.h:179
		const int32_t KI_WORLD_X_EXTENT = 10000;

		// BrnPropConstants.h:180
		const int32_t KI_WORLD_Z_EXTENT = 10000;

		// BrnPropConstants.h:181
		const int32_t KI_WORLD_X_HALF_EXTENT = 5000;

		// BrnPropConstants.h:182
		const int32_t KI_WORLD_Z_HALF_EXTENT = 5000;

		// BrnPropConstants.h:183
		const int32_t KI_CELL_WIDTH = 100;

		// BrnPropConstants.h:184
		const int32_t KI_CELL_DEPTH = 100;

		// BrnPropConstants.h:185
		const int32_t KI_MAX_CELL_X = 100;

		// BrnPropConstants.h:186
		const int32_t KI_MAX_CELL_Z = 100;

		// BrnPropConstants.h:187
		const int32_t KI_NUM_PROP_CELLS = 10000;

		// BrnPropConstants.h:188
		const int32_t KU_MAX_LOADED_PROP_CELLS = 150;

		// BrnPropConstants.h:189
		const int32_t KU_MAX_ACTIVE_CELLS = 4;

		// BrnPropConstants.h:195
		const int32_t KI_MAX_NUM_HIT_PROPS_TO_SAVE = 1000;

		// BrnPropConstants.h:197
		const uint32_t KU_MAX_TRAFFIC_KNOCKDOWN_EVENTS = 32;

		// BrnPropConstants.h:198
		const uint32_t KU_MAX_TRAFFIC_RESTORE_EVENTS = 80;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		struct PropPartTypeData;

		struct PropTypeData;

		struct AddPhysicalPropEvent;

		struct AddPhysicalPartEvent;

		struct RemovePhysicalPropEvent;

		struct RemovePhysicalPartEvent;

		struct PropUpdateNotification;

		struct PropPhysicsDataHeader;

		struct PropInputInterface;

		// BrnPropConstants.h:104
		const uint32_t KU_MAX_PROPS_TO_UPDATE = 100;

		// BrnPropConstants.h:106
		const uint8_t KU_DEFAULT_ROTATION = 127;

		// BrnPropConstants.h:109
		const uint32_t KU_MAX_PROP_STATES = 4;

		// BrnPropConstants.h:112
		const uint32_t KU_MAX_PROP_STATE_TRANSFERS = 3;

		// BrnPropConstants.h:116
		const uint32_t KU_MAX_PROP_COLLISION_EVENTS = 7;

		// BrnPropConstants.h:119
		const uint32_t KU_MAX_PROP_TYPES = 500;

		// BrnPropConstants.h:122
		const uint32_t KU_MAX_PROP_PART_TYPES = 300;

		// BrnPropConstants.h:125
		const uint32_t KU_MAX_LOADED_ZONES = 9;

		// BrnPropConstants.h:128
		const uint32_t KU_MAX_PROP_INSTANCES_PER_ZONE = 600;

		// BrnPropConstants.h:131
		const uint32_t KU_MAX_PROP_PARTS_PER_ZONE = 500;

		// BrnPropConstants.h:134
		const uint32_t KU_MAX_LOADED_PROP_INSTANCES = 5400;

		// BrnPropConstants.h:137
		const uint32_t KU_MAX_LOADED_PART_INSTANCES = 4500;

		// BrnPropConstants.h:140
		const int32_t KI_MAX_ZONES_TO_UNLOAD = 2;

		// BrnPropConstants.h:143
		const int32_t KI_MAX_ZONES_TO_LOAD = 2;

		// BrnPropConstants.h:146
		const uint32_t KU_MAX_LOADED_PROPS_AND_PARTS = 9900;

		// BrnPropConstants.h:149
		const uint32_t KU_MAX_COLLIDABLE_PROPS = 1000;

		// BrnPropConstants.h:152
		const uint32_t KU_MAX_PHYSICAL_PROPS = 15;

		// BrnPropConstants.h:155
		const uint32_t KU_MAX_PHYSICAL_PROP_PARTS = 30;

		// BrnPropConstants.h:158
		const uint32_t KU_MAX_ZONES = 500;

		// BrnPropConstants.h:161
		const uint32_t KU_MAX_PROP_PARTS_PER_PROP = 30;

		// BrnPropConstants.h:164
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PROP = 30;

		// BrnPropConstants.h:167
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PART = 10;

		// BrnPropConstants.h:169
		const int32_t KI_MAX_JOINTED_PROPS = 15;

		// BrnPropConstants.h:171
		const uint32_t KU_MAX_PROP_COLLISION_VOLUMES_IN_SCENE = 3200;

		// BrnPropConstants.h:172
		const uint32_t KU_MAX_PROP_ENTITIES_IN_SCENE = 7500;

		// BrnPropConstants.h:174
		const uint32_t KU_MAX_NON_PERSISTENT_PROPS_PER_ZONE = 600;

		// BrnPropConstants.h:176
		const VecFloat KVF_PROP_FLOOR;

		// BrnPropConstants.h:179
		const int32_t KI_WORLD_X_EXTENT = 10000;

		// BrnPropConstants.h:180
		const int32_t KI_WORLD_Z_EXTENT = 10000;

		// BrnPropConstants.h:181
		const int32_t KI_WORLD_X_HALF_EXTENT = 5000;

		// BrnPropConstants.h:182
		const int32_t KI_WORLD_Z_HALF_EXTENT = 5000;

		// BrnPropConstants.h:183
		const int32_t KI_CELL_WIDTH = 100;

		// BrnPropConstants.h:184
		const int32_t KI_CELL_DEPTH = 100;

		// BrnPropConstants.h:185
		const int32_t KI_MAX_CELL_X = 100;

		// BrnPropConstants.h:186
		const int32_t KI_MAX_CELL_Z = 100;

		// BrnPropConstants.h:187
		const int32_t KI_NUM_PROP_CELLS = 10000;

		// BrnPropConstants.h:188
		const int32_t KU_MAX_LOADED_PROP_CELLS = 150;

		// BrnPropConstants.h:189
		const int32_t KU_MAX_ACTIVE_CELLS = 4;

		// BrnPropConstants.h:195
		const int32_t KI_MAX_NUM_HIT_PROPS_TO_SAVE = 1000;

		// BrnPropConstants.h:197
		const uint32_t KU_MAX_TRAFFIC_KNOCKDOWN_EVENTS = 32;

		// BrnPropConstants.h:198
		const uint32_t KU_MAX_TRAFFIC_RESTORE_EVENTS = 80;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		struct PropPartTypeData;

		struct PropTypeData;

		struct PropInstanceData;

		struct AddPhysicalPropEvent;

		struct AddPhysicalPartEvent;

		struct UpdatePropEvent;

		struct RemovePhysicalPropEvent;

		struct RemovePhysicalPartEvent;

		struct PropUpdateNotification;

		struct PropPhysicsDataHeader;

		struct PropInputInterface;

		struct PropOutputInterface;

		struct PropCellId;

		struct PropCellData;

		struct PropZoneData;

		struct PropGraphics;

		struct PropPartGraphics;

		struct PropGraphicsList;

		struct PropInstance;

		struct PropPartInstance;

		struct PropRaceCarContact;

		struct PropRaceCarContactBuffer;

		// Declaration
		struct PropDebugComponent {
		public:
			PropDebugComponent();

		}

		// BrnPropConstants.h:104
		const uint32_t KU_MAX_PROPS_TO_UPDATE = 100;

		// BrnPropConstants.h:106
		const uint8_t KU_DEFAULT_ROTATION = 127;

		// BrnPropConstants.h:109
		const uint32_t KU_MAX_PROP_STATES = 4;

		// BrnPropConstants.h:112
		const uint32_t KU_MAX_PROP_STATE_TRANSFERS = 3;

		// BrnPropConstants.h:116
		const uint32_t KU_MAX_PROP_COLLISION_EVENTS = 7;

		// BrnPropConstants.h:119
		const uint32_t KU_MAX_PROP_TYPES = 500;

		// BrnPropConstants.h:122
		const uint32_t KU_MAX_PROP_PART_TYPES = 300;

		// BrnPropConstants.h:125
		const uint32_t KU_MAX_LOADED_ZONES = 9;

		// BrnPropConstants.h:128
		const uint32_t KU_MAX_PROP_INSTANCES_PER_ZONE = 600;

		// BrnPropConstants.h:131
		const uint32_t KU_MAX_PROP_PARTS_PER_ZONE = 500;

		// BrnPropConstants.h:134
		const uint32_t KU_MAX_LOADED_PROP_INSTANCES = 5400;

		// BrnPropConstants.h:137
		const uint32_t KU_MAX_LOADED_PART_INSTANCES = 4500;

		// BrnPropConstants.h:140
		const int32_t KI_MAX_ZONES_TO_UNLOAD = 2;

		// BrnPropConstants.h:143
		const int32_t KI_MAX_ZONES_TO_LOAD = 2;

		// BrnPropConstants.h:146
		const uint32_t KU_MAX_LOADED_PROPS_AND_PARTS = 9900;

		// BrnPropConstants.h:149
		const uint32_t KU_MAX_COLLIDABLE_PROPS = 1000;

		// BrnPropConstants.h:152
		const uint32_t KU_MAX_PHYSICAL_PROPS = 15;

		// BrnPropConstants.h:155
		const uint32_t KU_MAX_PHYSICAL_PROP_PARTS = 30;

		// BrnPropConstants.h:158
		const uint32_t KU_MAX_ZONES = 500;

		// BrnPropConstants.h:161
		const uint32_t KU_MAX_PROP_PARTS_PER_PROP = 30;

		// BrnPropConstants.h:164
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PROP = 30;

		// BrnPropConstants.h:167
		const uint32_t KU_MAX_COLLISION_VOLUMES_PER_PART = 10;

		// BrnPropConstants.h:169
		const int32_t KI_MAX_JOINTED_PROPS = 15;

		// BrnPropConstants.h:171
		const uint32_t KU_MAX_PROP_COLLISION_VOLUMES_IN_SCENE = 3200;

		// BrnPropConstants.h:172
		const uint32_t KU_MAX_PROP_ENTITIES_IN_SCENE = 7500;

		// BrnPropConstants.h:174
		const uint32_t KU_MAX_NON_PERSISTENT_PROPS_PER_ZONE = 600;

		// BrnPropConstants.h:176
		const VecFloat KVF_PROP_FLOOR;

		// BrnPropConstants.h:179
		const int32_t KI_WORLD_X_EXTENT = 10000;

		// BrnPropConstants.h:180
		const int32_t KI_WORLD_Z_EXTENT = 10000;

		// BrnPropConstants.h:181
		const int32_t KI_WORLD_X_HALF_EXTENT = 5000;

		// BrnPropConstants.h:182
		const int32_t KI_WORLD_Z_HALF_EXTENT = 5000;

		// BrnPropConstants.h:183
		const int32_t KI_CELL_WIDTH = 100;

		// BrnPropConstants.h:184
		const int32_t KI_CELL_DEPTH = 100;

		// BrnPropConstants.h:185
		const int32_t KI_MAX_CELL_X = 100;

		// BrnPropConstants.h:186
		const int32_t KI_MAX_CELL_Z = 100;

		// BrnPropConstants.h:187
		const int32_t KI_NUM_PROP_CELLS = 10000;

		// BrnPropConstants.h:188
		const int32_t KU_MAX_LOADED_PROP_CELLS = 150;

		// BrnPropConstants.h:189
		const int32_t KU_MAX_ACTIVE_CELLS = 4;

		// BrnPropConstants.h:195
		const int32_t KI_MAX_NUM_HIT_PROPS_TO_SAVE = 1000;

		// BrnPropConstants.h:197
		const uint32_t KU_MAX_TRAFFIC_KNOCKDOWN_EVENTS = 32;

		// BrnPropConstants.h:198
		const uint32_t KU_MAX_TRAFFIC_RESTORE_EVENTS = 80;

	}

}

