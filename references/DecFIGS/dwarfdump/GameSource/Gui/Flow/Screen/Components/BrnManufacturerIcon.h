// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ManufacturersIcon {
		// BrnManufacturerIcon.h:48
		enum E_MANUFACTURER {
			E_MANUFACTURER_CARSON = 0,
			E_MANUFACTURER_HUNTER = 1,
			E_MANUFACTURER_JANSEN = 2,
			E_MANUFACTURER_KERIGER = 3,
			E_MANUFACTURER_KITANO = 4,
			E_MANUFACTURER_MONTGOMERY = 5,
			E_MANUFACTURER_NAKAMURA = 6,
			E_MANUFACTURER_ROSSOLINI = 7,
			E_MANUFACTURER_WATSON = 8,
			E_MANUFACTURER_NONE = 9,
			E_MANUFACTURER_COUNT = 10,
		}

		// BrnManufacturerIcon.h:66
		struct ManufacturersStringEnumMap {
			// BrnManufacturerIcon.h:67
			const char * mCarNameIdentifier;

			// BrnManufacturerIcon.h:68
			BrnGui::ManufacturersIcon::E_MANUFACTURER meManufacturersIcon;

		}

	}

}

// BrnManufacturerIcon.h:96
extern BrnGui::ManufacturersIcon::ManufacturersStringEnumMap[] maCarNameToManufacturesMapping;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ManufacturersIcon {
		// BrnManufacturerIcon.h:48
		enum E_MANUFACTURER {
			E_MANUFACTURER_CARSON = 0,
			E_MANUFACTURER_HUNTER = 1,
			E_MANUFACTURER_JANSEN = 2,
			E_MANUFACTURER_KERIGER = 3,
			E_MANUFACTURER_KITANO = 4,
			E_MANUFACTURER_MONTGOMERY = 5,
			E_MANUFACTURER_NAKAMURA = 6,
			E_MANUFACTURER_ROSSOLINI = 7,
			E_MANUFACTURER_WATSON = 8,
			E_MANUFACTURER_NONE = 9,
			E_MANUFACTURER_COUNT = 10,
		}

		// BrnManufacturerIcon.h:66
		struct ManufacturersStringEnumMap {
			// BrnManufacturerIcon.h:67
			const char * mCarNameIdentifier;

			// BrnManufacturerIcon.h:68
			BrnGui::ManufacturersIcon::E_MANUFACTURER meManufacturersIcon;

		}

	}

}

// BrnManufacturerIcon.h:44
struct BrnGui::ManufacturersIcon : public CgsGui::GuiComponent {
private:
	// BrnManufacturerIcon.cpp:23
	extern const BrnGui::ManufacturersIcon::ManufacturersStringEnumMap[88] maCarNameToManufacturesMapping;

public:
	// BrnManufacturerIcon.cpp:134
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnManufacturerIcon.cpp:150
	void Update();

	// BrnManufacturerIcon.cpp:165
	void Set(const BrnResource::VehicleList *, CgsID);

private:
	// BrnManufacturerIcon.cpp:209
	void Set(BrnGui::ManufacturersIcon::E_MANUFACTURER);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ManufacturersIcon {
		// BrnManufacturerIcon.h:48
		enum E_MANUFACTURER {
			E_MANUFACTURER_CARSON = 0,
			E_MANUFACTURER_HUNTER = 1,
			E_MANUFACTURER_JANSEN = 2,
			E_MANUFACTURER_KERIGER = 3,
			E_MANUFACTURER_KITANO = 4,
			E_MANUFACTURER_MONTGOMERY = 5,
			E_MANUFACTURER_NAKAMURA = 6,
			E_MANUFACTURER_ROSSOLINI = 7,
			E_MANUFACTURER_WATSON = 8,
			E_MANUFACTURER_NONE = 9,
			E_MANUFACTURER_COUNT = 10,
		}

		// BrnManufacturerIcon.h:66
		struct ManufacturersStringEnumMap {
			// BrnManufacturerIcon.h:67
			const char * mCarNameIdentifier;

			// BrnManufacturerIcon.h:68
			BrnGui::ManufacturersIcon::E_MANUFACTURER meManufacturersIcon;

		}

	private:
		// BrnManufacturerIcon.h:96
		extern BrnGui::ManufacturersIcon::ManufacturersStringEnumMap[] maCarNameToManufacturesMapping;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ManufacturersIcon {
		// BrnManufacturerIcon.h:48
		enum E_MANUFACTURER {
			E_MANUFACTURER_CARSON = 0,
			E_MANUFACTURER_HUNTER = 1,
			E_MANUFACTURER_JANSEN = 2,
			E_MANUFACTURER_KERIGER = 3,
			E_MANUFACTURER_KITANO = 4,
			E_MANUFACTURER_MONTGOMERY = 5,
			E_MANUFACTURER_NAKAMURA = 6,
			E_MANUFACTURER_ROSSOLINI = 7,
			E_MANUFACTURER_WATSON = 8,
			E_MANUFACTURER_NONE = 9,
			E_MANUFACTURER_COUNT = 10,
		}

		// BrnManufacturerIcon.h:66
		struct ManufacturersStringEnumMap {
			// BrnManufacturerIcon.h:67
			const char * mCarNameIdentifier;

			// BrnManufacturerIcon.h:68
			BrnGui::ManufacturersIcon::E_MANUFACTURER meManufacturersIcon;

		}

	public:
		ManufacturersIcon();

	private:
		// BrnManufacturerIcon.h:96
		extern BrnGui::ManufacturersIcon::ManufacturersStringEnumMap[] maCarNameToManufacturesMapping;

	}

}

// BrnManufacturerIcon.h:44
void BrnGui::ManufacturersIcon::ManufacturersIcon() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

