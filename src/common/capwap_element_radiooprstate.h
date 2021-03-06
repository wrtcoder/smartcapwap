#ifndef __CAPWAP_ELEMENT_RADIOOPRSTATE_HEADER__
#define __CAPWAP_ELEMENT_RADIOOPRSTATE_HEADER__

#define CAPWAP_ELEMENT_RADIOOPRSTATE_VENDOR		0
#define CAPWAP_ELEMENT_RADIOOPRSTATE_TYPE		32
#define CAPWAP_ELEMENT_RADIOOPRSTATE			(struct capwap_message_element_id){ .vendor = CAPWAP_ELEMENT_RADIOOPRSTATE_VENDOR, .type = CAPWAP_ELEMENT_RADIOOPRSTATE_TYPE }


#define CAPWAP_RADIO_OPERATIONAL_STATE_ENABLED				1
#define CAPWAP_RADIO_OPERATIONAL_STATE_DISABLED				2

#define CAPWAP_RADIO_OPERATIONAL_CAUSE_NORMAL				0
#define CAPWAP_RADIO_OPERATIONAL_CAUSE_RADIOFAILURE			1
#define CAPWAP_RADIO_OPERATIONAL_CAUSE_SOFTWAREFAILURE		2
#define CAPWAP_RADIO_OPERATIONAL_CAUSE_ADMINSET				3

struct capwap_radiooprstate_element {
	uint8_t radioid;
	uint8_t state;
	uint8_t cause;
};

extern const struct capwap_message_elements_ops capwap_element_radiooprstate_ops;

#endif /* __CAPWAP_ELEMENT_RADIOOPRSTATE_HEADER__ */
