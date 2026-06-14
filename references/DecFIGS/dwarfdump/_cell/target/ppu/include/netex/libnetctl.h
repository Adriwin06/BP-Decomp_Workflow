// libnetctl.h:259
struct CellNetCtlNetStartDialogParam {
	// libnetctl.h:260
	size_t size;

	// libnetctl.h:261
	int type;

	// libnetctl.h:262
	sys_memory_container_t cid;

}

// libnetctl.h:269
struct CellNetCtlNetStartDialogResult {
	// libnetctl.h:270
	size_t size;

	// libnetctl.h:271
	int result;

}

// libnetctl.h:198
struct CellNetCtlEtherAddr {
	// libnetctl.h:199
	uint8_t[6] data;

	// libnetctl.h:200
	uint8_t[2] padding;

}

// libnetctl.h:203
struct CellNetCtlSSID {
	// libnetctl.h:204
	uint8_t[32] data;

	// libnetctl.h:205
	uint8_t term;

	// libnetctl.h:206
	uint8_t[3] padding;

}

// libnetctl.h:209
union CellNetCtlInfo {
	// libnetctl.h:210
	uint32_t device;

	// libnetctl.h:211
	CellNetCtlEtherAddr ether_addr;

	// libnetctl.h:212
	uint32_t mtu;

	// libnetctl.h:213
	uint32_t link;

	// libnetctl.h:214
	uint32_t link_type;

	// libnetctl.h:215
	CellNetCtlEtherAddr bssid;

	// libnetctl.h:216
	CellNetCtlSSID ssid;

	// libnetctl.h:217
	uint32_t wlan_security;

	// libnetctl.h:218
	uint32_t auth_8021x_type;

	// libnetctl.h:219
	char[128] auth_8021x_auth_name;

	// libnetctl.h:220
	uint8_t rssi;

	// libnetctl.h:221
	uint8_t channel;

	// libnetctl.h:222
	uint32_t ip_config;

	// libnetctl.h:223
	char[256] dhcp_hostname;

	// libnetctl.h:224
	char[128] pppoe_auth_name;

	// libnetctl.h:225
	char[16] ip_address;

	// libnetctl.h:226
	char[16] netmask;

	// libnetctl.h:227
	char[16] default_route;

	// libnetctl.h:228
	char[16] primary_dns;

	// libnetctl.h:229
	char[16] secondary_dns;

	// libnetctl.h:230
	uint32_t http_proxy_config;

	// libnetctl.h:231
	char[256] http_proxy_server;

	// libnetctl.h:232
	uint16_t http_proxy_port;

	// libnetctl.h:233
	uint32_t upnp_config;

}
