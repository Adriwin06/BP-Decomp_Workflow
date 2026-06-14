// in.h:22
struct in_addr {
	// in.h:23
	in_addr_t s_addr;

}

// in.h:53
struct sockaddr_in {
	// in.h:54
	unsigned char sin_len;

	// in.h:55
	sa_family_t sin_family;

	// in.h:56
	in_port_t sin_port;

	// in.h:57
	in_addr sin_addr;

	// in.h:58
	char[8] sin_zero;

}

