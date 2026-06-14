// CgsEntityId.h:27
namespace CgsSceneManager {
	// SceneManagerConstants.h:43
	const int32_t KI_MAX_NUM_ENTITIES = 10000;

	// SceneManagerConstants.h:44
	const int32_t KI_MAX_NUM_VOLUMES = 5048;

	// SceneManagerConstants.h:45
	const int32_t KI_MAX_NUM_VOLUME_INSTANCES = 5048;

	// SceneManagerConstants.h:46
	const int32_t KI_MAX_NUM_COARSE_RESULTS = 16384;

	// SceneManagerConstants.h:47
	const int32_t KI_MAX_NUM_LINE_TEST_RESULTS = 256;

	// SceneManagerConstants.h:49
	const int32_t KI_MAX_NUM_DYNAMIC_VOLUMES = 4608;

	// SceneManagerConstants.h:52
	const int32_t KI_VOLUME_ID_HASH_TABLE_BIN_COUNT = 227;

	// SceneManagerConstants.h:53
	const int32_t KI_VOLUME_INSTANCE_ID_HASH_TABLE_BIN_COUNT = 509;

	// SceneManagerConstants.h:54
	const int32_t KI_ENTITY_ID_HASH_TABLE_BIN_COUNT = 541;

	// SceneManagerConstants.h:57
	const int32_t KI_MAX_NUM_DYNAMIC_INTERVAL_OBJECTS = 2000;

	// SceneManagerConstants.h:58
	const int32_t KI_MAX_NUM_INACTIVE_INTERVAL_OBJECTS = 3050;

	// SceneManagerConstants.h:59
	const int32_t KI_MAX_NUM_STATIC_INTERVAL_OBJECTS = 1;

	// SceneManagerConstants.h:62
	const int32_t KI_CACHE_MAX_CACHED_OBJECTS = 298;

	// SceneManagerConstants.h:64
	const int32_t KI_CACHE_NUM_4TRIS_PER_CACHED_OBJECT = 44;

	// SceneManagerConstants.h:68
	const int32_t KI_MAX_NUM_POLY_SOUP_LISTS = 512;

	// SceneManagerConstants.h:69
	const int32_t KI_ADD_POLY_SOUP_LIST_QUEUE_SIZE = 20;

	// SceneManagerConstants.h:73
	const rw::math::vpu::Vector3 K_DEFAULT_PADDING;

	// SceneManagerConstants.h:77
	const float_t KF_DEFAULT_MIN_PADDING;

	// SceneManagerConstants.h:78
	const float_t KF_DEFAULT_MAX_PADDING;

	// SceneManagerConstants.h:80
	const int32_t KI_SCENE_MANAGER_FINE_QUERY_QUEUE_MEMSIZE = 2048;

	// SceneManagerConstants.h:81
	const int32_t KI_SCENE_MANAGER_COARSE_QUERY_QUEUE_MEMSIZE = 16384;

	// SceneManagerConstants.h:82
	const int32_t KI_SCENE_MANAGER_UPDATE_QUEUE_MEMSIZE = 262144;

	// SceneManagerConstants.h:83
	const int32_t KI_SCENE_MANAGER_VOLUME_QUEUE_MEMSIZE = 4096;

	// SceneManagerConstants.h:84
	const int32_t KI_SCENE_MANAGER_RESULTS_QUEUE_MEMSIZE = 32768;

	// SceneManagerConstants.h:85
	const int32_t KI_SCENE_MANAGER_ERROR_QUEUE_SIZE = 128;

	// SceneManagerConstants.h:86
	const int32_t KI_COARSE_LINE_TEST_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:88
	const int32_t KI_SCENE_MANAGER_COARSE_LINE_TEST_QUEUE_SIZE = 256;

	// SceneManagerConstants.h:89
	const int32_t KI_SCENE_MANAGER_FINE_LINE_TEST_QUEUE_SIZE = 256;

	// SceneManagerConstants.h:90
	const int32_t KI_SCENE_MANAGER_FINE_LINE_TEST_NEAREST_QUEUE_SIZE = 256;

	// SceneManagerConstants.h:92
	const int32_t KI_SCENE_MANAGER_FINE_LINE_TEST_FAST_DOUBLE_SIDED_QUEUE_SIZE = 16;

	// SceneManagerConstants.h:93
	const int32_t KI_SCENE_MANAGER_FINE_SPHERE_TEST_FAST_QUEUE_SIZE = 16;

	// SceneManagerConstants.h:95
	const int32_t KI_SCENE_MANAGER_FINE_VOLUME_TEST_DEEPEST_QUEUE_SIZE = 256;

	// SceneManagerConstants.h:98
	const int32_t KI_SCENE_MANAGER_ADD_ENTITY_QUEUE_SIZE = 5120;

	// SceneManagerConstants.h:99
	const int32_t KI_SCENE_MANAGER_ADD_DYNAMIC_VOLUME_QUEUE_SIZE = 1280;

	// SceneManagerConstants.h:100
	const int32_t KI_SCENE_MANAGER_ADD_FOR_COLLISION_QUEUE_SIZE = 1536;

	// SceneManagerConstants.h:101
	const int32_t KI_SCENE_MANAGER_ADD_INTERNAL_VOLUME_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:102
	const int32_t KI_SCENE_MANAGER_ADD_STATIC_VOLUME_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:103
	const int32_t KI_SCENE_MANAGER_ADD_VOLUME_INSTANCE_QUEUE_SIZE = 1280;

	// SceneManagerConstants.h:104
	const int32_t KI_SCENE_MANAGER_ADD_VOLUME_INSTANCE_FOR_CACHING = 64;

	// SceneManagerConstants.h:105
	const int32_t KI_SCENE_MANAGER_REMOVE_ALL_VOLUME_INSTANCES_QUEUE_SIZE = 1;

	// SceneManagerConstants.h:107
	const int32_t KI_SCENE_MANAGER_REMOVE_ENTITY_QUEUE_SIZE = 10000;

	// SceneManagerConstants.h:108
	const int32_t KI_SCENE_MANAGER_REMOVE_FOR_COLLISION_QUEUE_SIZE = 1536;

	// SceneManagerConstants.h:109
	const int32_t KI_SCENE_MANAGER_REMOVE_INTERNAL_VOLUME_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:110
	const int32_t KI_SCENE_MANAGER_REMOVE_VOLUME_QUEUE_SIZE = 1344;

	// SceneManagerConstants.h:111
	const int32_t KI_SCENE_MANAGER_REMOVE_VOLUME_INSTANCE_QUEUE_SIZE = 1280;

	// SceneManagerConstants.h:112
	const int32_t KI_SCENE_MANAGER_SET_PADDING_QUEUE_SIZE = 1280;

	// SceneManagerConstants.h:113
	const int32_t KI_SCENE_MANAGER_CLEAR_ENTITY_PADDING_QUEUE_SIZE = 16;

	// SceneManagerConstants.h:116
	const int32_t KI_SCENE_MANAGER_SET_VOLUME_INSTANCE_CULLING_GROUP_QUEUE_SIZE = 1280;

	// SceneManagerConstants.h:118
	const int32_t KI_SCENE_MANAGER_FORCE_NO_PADDING_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:119
	const int32_t KI_SCENE_MANAGER_UPDATE_ENTITY_POSITION_QUEUE_SIZE = 1024;

	// SceneManagerConstants.h:120
	const int32_t KI_SCENE_MANAGER_SET_VOLUME_INSTANCE_TRANSFORM_QUEUE_SIZE = 1024;

	// SceneManagerConstants.h:121
	const int32_t KI_SCENE_MANAGER_REPLACE_DYNAMIC_VOLUME_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:122
	const int32_t KI_SCENE_MANAGER_SET_CULLING_GROUP_PAIR_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:123
	const int32_t KI_SCENE_MANAGER_CLEAR_CULLING_TABLE_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:124
	const int32_t KI_SCENE_MANAGER_SET_ENTITY_RADIUS_QUEUE_SIZE = 512;

	// SceneManagerConstants.h:131
	const int32_t KI_RW_VOLUME_VOLUME_QUERY_STACK_SIZE = 100;

	// SceneManagerConstants.h:132
	const int32_t KI_RW_VOLUME_VOLUME_QUERY_BUFFER_SIZE = 100;

	// SceneManagerConstants.h:133
	const int32_t KI_RW_VOLUME_LINE_QUERY_STACK_SIZE = 100;

	// SceneManagerConstants.h:134
	const int32_t KI_RW_VOLUME_LINE_QUERY_BUFFER_SIZE = 100;

	// SceneManagerConstants.h:135
	const int32_t KI_RW_VOLUME_BB_QUERY_STACK_SIZE = 100;

	// SceneManagerConstants.h:136
	const int32_t KI_RW_VOLUME_BB_QUERY_BUFFER_SIZE = 100;

	// SceneManagerConstants.h:141
	const int32_t KI_SCENE_GRAPH_ADD_QUEUE_MEMSIZE = 1024;

	// SceneManagerConstants.h:142
	const int32_t KI_SCENE_GRAPH_REMOVE_QUEUE_MEMSIZE = 1024;

	// SceneManagerConstants.h:143
	const int32_t KI_SCENE_GRAPH_UPDATE_QUEUE_MEMSIZE = 135168;

	// SceneManagerConstants.h:144
	const int32_t KI_SCENE_GRAPH_QUERY_QUEUE_MEMSIZE = 20480;

	// SceneManagerConstants.h:145
	const int32_t KI_SCENE_GRAPH_RESULTS_QUEUE_MEMSIZE = 20480;

	// SceneManagerConstants.h:146
	const int32_t KI_SCENE_GRAPH_ERROR_QUEUE_SIZE = 128;

	// SceneManagerConstants.h:152
	const int32_t KI_SCENE_GRAPH_LINE_TEST_QUEUE_SIZE = 163;

	// SceneManagerConstants.h:153
	const int32_t KI_SCENE_GRAPH_SPHERE_TEST_QUEUE_SIZE = 191;

	// SceneManagerConstants.h:154
	const int32_t KI_SCENE_GRAPH_VOLUME_TEST_QUEUE_SIZE = 16;

	// SceneManagerConstants.h:155
	const int32_t KI_SCENE_GRAPH_FRUSTUM_TEST_QUEUE_SIZE = 16;

	// SceneManagerConstants.h:156
	const int32_t KI_SCENE_GRAPH_FRUSTUM_TEST_VP_QUEUE_SIZE = 8;

	// SceneManagerConstants.h:159
	const uint32_t KU_SPHERE_TREE_MAX_NUM_SPHERES = 4096;

	// SceneManagerConstants.h:162
	const uint32_t KU_LOOSE_OCTREE_ADAPTIVE_NODE_POOL_SIZE = 8192;

	// SceneManagerConstants.h:167
	const int32_t KI_FINE_QUERY_QUEUE_MEMSIZE = 64;

	// SceneManagerConstants.h:168
	const int32_t KI_FINE_RESULT_QUEUE_MEMSIZE = 64;

	// SceneManagerConstants.h:169
	const int32_t KI_FINE_ERROR_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:170
	const int32_t KI_IN_LINE_TEST_FINE_QUEUE = 64;

	// SceneManagerConstants.h:171
	const int32_t KI_IN_LINE_TEST_NEAREST_QUEUE = 150;

	// SceneManagerConstants.h:172
	const int32_t KI_IN_VOLUME_TEST_DEEPEST_QUEUE = 64;

	// SceneManagerConstants.h:173
	const int32_t KI_IN_VOLUME_TEST_FINE_QUEUE = 64;

	// SceneManagerConstants.h:174
	const int32_t KI_OUT_LINE_TEST_FINE_QUEUE = 64;

	// SceneManagerConstants.h:175
	const int32_t KI_OUT_LINE_TEST_NEAREST_QUEUE = 150;

	// SceneManagerConstants.h:176
	const int32_t KI_OUT_VOLUME_TEST_DEEPEST_QUEUE = 64;

	// SceneManagerConstants.h:177
	const int32_t KI_OUT_VOLUME_TEST_FINE_QUEUE = 64;

	// SceneManagerConstants.h:183
	const int32_t KI_POTENTIAL_CONTACT_QUEUE_SIZE = 2048;

	// SceneManagerConstants.h:184
	const uint32_t KU_NUM_CONTACT_CULLING_GROUPS = 24;

	// SceneManagerConstants.h:185
	const uint32_t KU_NUM_SET_PADDING_EVENTS = 10280;

	// SceneManagerConstants.h:186
	const uint32_t KU_NUM_FORCE_NO_PADDING_EVENTS = 128;

	// SceneManagerConstants.h:187
	const uint32_t KU_CULL_GROUP_PAIR_REQUESTS = 128;

	// SceneManagerConstants.h:188
	const uint32_t KI_OVERLAP_PAIRS_QUEUE_SIZE = 128;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// SceneManagerConstants.h:43
	const int32_t KI_MAX_NUM_ENTITIES = 10000;

	// SceneManagerConstants.h:44
	const int32_t KI_MAX_NUM_VOLUMES = 5048;

	// SceneManagerConstants.h:45
	const int32_t KI_MAX_NUM_VOLUME_INSTANCES = 5048;

	// SceneManagerConstants.h:46
	const int32_t KI_MAX_NUM_COARSE_RESULTS = 16384;

	// SceneManagerConstants.h:47
	const int32_t KI_MAX_NUM_LINE_TEST_RESULTS = 256;

	// SceneManagerConstants.h:49
	const int32_t KI_MAX_NUM_DYNAMIC_VOLUMES = 4608;

	// SceneManagerConstants.h:52
	const int32_t KI_VOLUME_ID_HASH_TABLE_BIN_COUNT = 227;

	// SceneManagerConstants.h:53
	const int32_t KI_VOLUME_INSTANCE_ID_HASH_TABLE_BIN_COUNT = 509;

	// SceneManagerConstants.h:54
	const int32_t KI_ENTITY_ID_HASH_TABLE_BIN_COUNT = 541;

	// SceneManagerConstants.h:57
	const int32_t KI_MAX_NUM_DYNAMIC_INTERVAL_OBJECTS = 2000;

	// SceneManagerConstants.h:58
	const int32_t KI_MAX_NUM_INACTIVE_INTERVAL_OBJECTS = 3050;

	// SceneManagerConstants.h:59
	const int32_t KI_MAX_NUM_STATIC_INTERVAL_OBJECTS = 1;

	// SceneManagerConstants.h:62
	const int32_t KI_CACHE_MAX_CACHED_OBJECTS = 298;

	// SceneManagerConstants.h:64
	const int32_t KI_CACHE_NUM_4TRIS_PER_CACHED_OBJECT = 44;

	// SceneManagerConstants.h:68
	const int32_t KI_MAX_NUM_POLY_SOUP_LISTS = 512;

	// SceneManagerConstants.h:69
	const int32_t KI_ADD_POLY_SOUP_LIST_QUEUE_SIZE = 20;

	// SceneManagerConstants.h:73
	const rw::math::vpu::Vector3 K_DEFAULT_PADDING;

	// SceneManagerConstants.h:77
	const float_t KF_DEFAULT_MIN_PADDING;

	// SceneManagerConstants.h:78
	const float_t KF_DEFAULT_MAX_PADDING;

	// SceneManagerConstants.h:80
	const int32_t KI_SCENE_MANAGER_FINE_QUERY_QUEUE_MEMSIZE = 2048;

	// SceneManagerConstants.h:81
	const int32_t KI_SCENE_MANAGER_COARSE_QUERY_QUEUE_MEMSIZE = 16384;

	// SceneManagerConstants.h:82
	const int32_t KI_SCENE_MANAGER_UPDATE_QUEUE_MEMSIZE = 262144;

	// SceneManagerConstants.h:83
	const int32_t KI_SCENE_MANAGER_VOLUME_QUEUE_MEMSIZE = 4096;

	// SceneManagerConstants.h:84
	const int32_t KI_SCENE_MANAGER_RESULTS_QUEUE_MEMSIZE = 32768;

	// SceneManagerConstants.h:85
	const int32_t KI_SCENE_MANAGER_ERROR_QUEUE_SIZE = 128;

	// SceneManagerConstants.h:86
	const int32_t KI_COARSE_LINE_TEST_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:88
	const int32_t KI_SCENE_MANAGER_COARSE_LINE_TEST_QUEUE_SIZE = 256;

	// SceneManagerConstants.h:89
	const int32_t KI_SCENE_MANAGER_FINE_LINE_TEST_QUEUE_SIZE = 256;

	// SceneManagerConstants.h:90
	const int32_t KI_SCENE_MANAGER_FINE_LINE_TEST_NEAREST_QUEUE_SIZE = 256;

	// SceneManagerConstants.h:92
	const int32_t KI_SCENE_MANAGER_FINE_LINE_TEST_FAST_DOUBLE_SIDED_QUEUE_SIZE = 16;

	// SceneManagerConstants.h:93
	const int32_t KI_SCENE_MANAGER_FINE_SPHERE_TEST_FAST_QUEUE_SIZE = 16;

	// SceneManagerConstants.h:95
	const int32_t KI_SCENE_MANAGER_FINE_VOLUME_TEST_DEEPEST_QUEUE_SIZE = 256;

	// SceneManagerConstants.h:98
	const int32_t KI_SCENE_MANAGER_ADD_ENTITY_QUEUE_SIZE = 5120;

	// SceneManagerConstants.h:99
	const int32_t KI_SCENE_MANAGER_ADD_DYNAMIC_VOLUME_QUEUE_SIZE = 1280;

	// SceneManagerConstants.h:100
	const int32_t KI_SCENE_MANAGER_ADD_FOR_COLLISION_QUEUE_SIZE = 1536;

	// SceneManagerConstants.h:101
	const int32_t KI_SCENE_MANAGER_ADD_INTERNAL_VOLUME_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:102
	const int32_t KI_SCENE_MANAGER_ADD_STATIC_VOLUME_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:103
	const int32_t KI_SCENE_MANAGER_ADD_VOLUME_INSTANCE_QUEUE_SIZE = 1280;

	// SceneManagerConstants.h:104
	const int32_t KI_SCENE_MANAGER_ADD_VOLUME_INSTANCE_FOR_CACHING = 64;

	// SceneManagerConstants.h:105
	const int32_t KI_SCENE_MANAGER_REMOVE_ALL_VOLUME_INSTANCES_QUEUE_SIZE = 1;

	// SceneManagerConstants.h:107
	const int32_t KI_SCENE_MANAGER_REMOVE_ENTITY_QUEUE_SIZE = 10000;

	// SceneManagerConstants.h:108
	const int32_t KI_SCENE_MANAGER_REMOVE_FOR_COLLISION_QUEUE_SIZE = 1536;

	// SceneManagerConstants.h:109
	const int32_t KI_SCENE_MANAGER_REMOVE_INTERNAL_VOLUME_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:110
	const int32_t KI_SCENE_MANAGER_REMOVE_VOLUME_QUEUE_SIZE = 1344;

	// SceneManagerConstants.h:111
	const int32_t KI_SCENE_MANAGER_REMOVE_VOLUME_INSTANCE_QUEUE_SIZE = 1280;

	// SceneManagerConstants.h:112
	const int32_t KI_SCENE_MANAGER_SET_PADDING_QUEUE_SIZE = 1280;

	// SceneManagerConstants.h:113
	const int32_t KI_SCENE_MANAGER_CLEAR_ENTITY_PADDING_QUEUE_SIZE = 16;

	// SceneManagerConstants.h:116
	const int32_t KI_SCENE_MANAGER_SET_VOLUME_INSTANCE_CULLING_GROUP_QUEUE_SIZE = 1280;

	// SceneManagerConstants.h:118
	const int32_t KI_SCENE_MANAGER_FORCE_NO_PADDING_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:119
	const int32_t KI_SCENE_MANAGER_UPDATE_ENTITY_POSITION_QUEUE_SIZE = 1024;

	// SceneManagerConstants.h:120
	const int32_t KI_SCENE_MANAGER_SET_VOLUME_INSTANCE_TRANSFORM_QUEUE_SIZE = 1024;

	// SceneManagerConstants.h:121
	const int32_t KI_SCENE_MANAGER_REPLACE_DYNAMIC_VOLUME_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:122
	const int32_t KI_SCENE_MANAGER_SET_CULLING_GROUP_PAIR_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:123
	const int32_t KI_SCENE_MANAGER_CLEAR_CULLING_TABLE_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:124
	const int32_t KI_SCENE_MANAGER_SET_ENTITY_RADIUS_QUEUE_SIZE = 512;

	// SceneManagerConstants.h:131
	const int32_t KI_RW_VOLUME_VOLUME_QUERY_STACK_SIZE = 100;

	// SceneManagerConstants.h:132
	const int32_t KI_RW_VOLUME_VOLUME_QUERY_BUFFER_SIZE = 100;

	// SceneManagerConstants.h:133
	const int32_t KI_RW_VOLUME_LINE_QUERY_STACK_SIZE = 100;

	// SceneManagerConstants.h:134
	const int32_t KI_RW_VOLUME_LINE_QUERY_BUFFER_SIZE = 100;

	// SceneManagerConstants.h:135
	const int32_t KI_RW_VOLUME_BB_QUERY_STACK_SIZE = 100;

	// SceneManagerConstants.h:136
	const int32_t KI_RW_VOLUME_BB_QUERY_BUFFER_SIZE = 100;

	// SceneManagerConstants.h:141
	const int32_t KI_SCENE_GRAPH_ADD_QUEUE_MEMSIZE = 1024;

	// SceneManagerConstants.h:142
	const int32_t KI_SCENE_GRAPH_REMOVE_QUEUE_MEMSIZE = 1024;

	// SceneManagerConstants.h:143
	const int32_t KI_SCENE_GRAPH_UPDATE_QUEUE_MEMSIZE = 135168;

	// SceneManagerConstants.h:144
	const int32_t KI_SCENE_GRAPH_QUERY_QUEUE_MEMSIZE = 20480;

	// SceneManagerConstants.h:145
	const int32_t KI_SCENE_GRAPH_RESULTS_QUEUE_MEMSIZE = 20480;

	// SceneManagerConstants.h:146
	const int32_t KI_SCENE_GRAPH_ERROR_QUEUE_SIZE = 128;

	// SceneManagerConstants.h:152
	const int32_t KI_SCENE_GRAPH_LINE_TEST_QUEUE_SIZE = 163;

	// SceneManagerConstants.h:153
	const int32_t KI_SCENE_GRAPH_SPHERE_TEST_QUEUE_SIZE = 191;

	// SceneManagerConstants.h:154
	const int32_t KI_SCENE_GRAPH_VOLUME_TEST_QUEUE_SIZE = 16;

	// SceneManagerConstants.h:155
	const int32_t KI_SCENE_GRAPH_FRUSTUM_TEST_QUEUE_SIZE = 16;

	// SceneManagerConstants.h:156
	const int32_t KI_SCENE_GRAPH_FRUSTUM_TEST_VP_QUEUE_SIZE = 8;

	// SceneManagerConstants.h:159
	const uint32_t KU_SPHERE_TREE_MAX_NUM_SPHERES = 4096;

	// SceneManagerConstants.h:162
	const uint32_t KU_LOOSE_OCTREE_ADAPTIVE_NODE_POOL_SIZE = 8192;

	// SceneManagerConstants.h:167
	const int32_t KI_FINE_QUERY_QUEUE_MEMSIZE = 64;

	// SceneManagerConstants.h:168
	const int32_t KI_FINE_RESULT_QUEUE_MEMSIZE = 64;

	// SceneManagerConstants.h:169
	const int32_t KI_FINE_ERROR_QUEUE_SIZE = 64;

	// SceneManagerConstants.h:170
	const int32_t KI_IN_LINE_TEST_FINE_QUEUE = 64;

	// SceneManagerConstants.h:171
	const int32_t KI_IN_LINE_TEST_NEAREST_QUEUE = 150;

	// SceneManagerConstants.h:172
	const int32_t KI_IN_VOLUME_TEST_DEEPEST_QUEUE = 64;

	// SceneManagerConstants.h:173
	const int32_t KI_IN_VOLUME_TEST_FINE_QUEUE = 64;

	// SceneManagerConstants.h:174
	const int32_t KI_OUT_LINE_TEST_FINE_QUEUE = 64;

	// SceneManagerConstants.h:175
	const int32_t KI_OUT_LINE_TEST_NEAREST_QUEUE = 150;

	// SceneManagerConstants.h:176
	const int32_t KI_OUT_VOLUME_TEST_DEEPEST_QUEUE = 64;

	// SceneManagerConstants.h:177
	const int32_t KI_OUT_VOLUME_TEST_FINE_QUEUE = 64;

	// SceneManagerConstants.h:183
	const int32_t KI_POTENTIAL_CONTACT_QUEUE_SIZE = 2048;

	// SceneManagerConstants.h:184
	const uint32_t KU_NUM_CONTACT_CULLING_GROUPS = 24;

	// SceneManagerConstants.h:185
	const uint32_t KU_NUM_SET_PADDING_EVENTS = 10280;

	// SceneManagerConstants.h:186
	const uint32_t KU_NUM_FORCE_NO_PADDING_EVENTS = 128;

	// SceneManagerConstants.h:187
	const uint32_t KU_CULL_GROUP_PAIR_REQUESTS = 128;

	// SceneManagerConstants.h:188
	const uint32_t KI_OVERLAP_PAIRS_QUEUE_SIZE = 128;

}

