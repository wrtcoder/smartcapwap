#include "capwap.h"
#include "capwap_dfa.h"

#ifdef DEBUG

static char* l_nameofstate[] = {
	"START",								/* CAPWAP_START_STATE */
	"START_TO_IDLE",						/* CAPWAP_START_TO_IDLE_STATE */
	"IDLE",									/* CAPWAP_IDLE_STATE */
	"IDLE_TO_DISCOVERY",					/* CAPWAP_IDLE_TO_DISCOVERY_STATE */
	"IDLE_TO_DTLS_SETUP",					/* CAPWAP_IDLE_TO_DTLS_SETUP_STATE */
	"DISCOVERY",							/* CAPWAP_DISCOVERY_STATE */
	"DISCOVERY_TO_IDLE",					/* CAPWAP_DISCOVERY_TO_IDLE_STATE */
	"DISCOVERY_TO_SULKING",					/* CAPWAP_DISCOVERY_TO_SULKING_STATE */
	"DISCOVERY_TO_DTLS_SETUP",				/* CAPWAP_DISCOVERY_TO_DTLS_SETUP_STATE */
	"SULKING",								/* CAPWAP_SULKING_STATE */
	"SULKING_TO_IDLE",						/* CAPWAP_SULKING_TO_IDLE_STATE */
	"DTLS_SETUP",							/* CAPWAP_DTLS_SETUP_STATE */
	"DTLS_SETUP_TO_IDLE",					/* CAPWAP_DTLS_SETUP_TO_IDLE_STATE */
	"DTLS_SETUP_TO_SULKING",				/* CAPWAP_DTLS_SETUP_TO_SULKING_STATE */
	"DTLS_SETUP_TO_AUTHORIZE",				/* CAPWAP_DTLS_SETUP_TO_AUTHORIZE_STATE */
	"AUTHORIZE",							/* CAPWAP_AUTHORIZE_STATE */
	"AUTHORIZE_TO_DTLS_SETUP",				/* CAPWAP_AUTHORIZE_TO_DTLS_SETUP_STATE */
	"AUTHORIZE_TO_DTLS_CONNECT",			/* CAPWAP_AUTHORIZE_TO_DTLS_CONNECT_STATE */
	"AUTHORIZE_TO_DTLS_TEARDOWN",			/* CAPWAP_AUTHORIZE_TO_DTLS_TEARDOWN_STATE */
	"DTLS_CONNECT",							/* CAPWAP_DTLS_CONNECT_STATE */
	"DTLS_CONNECT_TO_DTLS_TEARDOWN",		/* CAPWAP_DTLS_CONNECT_TO_DTLS_TEARDOWN_STATE */
	"DTLS_CONNECT_TO_JOIN",					/* CAPWAP_DTLS_CONNECT_TO_JOIN_STATE */
	"DTLS_TEARDOWN",						/* CAPWAP_DTLS_TEARDOWN_STATE */
	"DTLS_TEARDOWN_TO_IDLE",				/* CAPWAP_DTLS_TEARDOWN_TO_IDLE_STATE */
	"DTLS_TEARDOWN_TO_SULKING",				/* CAPWAP_DTLS_TEARDOWN_TO_SULKING_STATE */
	"DTLS_TEARDOWN_TO_DEAD",				/* CAPWAP_DTLS_TEARDOWN_TO_DEAD_STATE */
	"JOIN",									/* CAPWAP_JOIN_STATE */
	"POST_JOIN",								/* CAPWAP_POSTJOIN_STATE */
	"JOIN_TO_DTLS_TEARDOWN",				/* CAPWAP_JOIN_TO_DTLS_TEARDOWN_STATE */
	"JOIN_TO_IMAGE_DATA",					/* CAPWAP_JOIN_TO_IMAGE_DATA_STATE */
	"JOIN_TO_CONFIGURE",					/* CAPWAP_JOIN_TO_CONFIGURE_STATE */
	"IMAGE_DATA",							/* CAPWAP_IMAGE_DATA_STATE */
	"IMAGE_DATA_TO_RESET",					/* CAPWAP_IMAGE_DATA_TO_RESET_STATE */
	"IMAGE_DATA_TO_DTLS_TEARDOWN",			/* CAPWAP_IMAGE_DATA_TO_DTLS_TEARDOWN_STATE */
	"CONFIGURE",							/* CAPWAP_CONFIGURE_STATE */
	"CONFIGURE_TO_RESET",					/* CAPWAP_CONFIGURE_TO_RESET_STATE */
	"CONFIGURE_TO_DTLS_TEARDOWN",			/* CAPWAP_CONFIGURE_TO_DTLS_TEARDOWN_STATE */
	"CONFIGURE_TO_DATA_CHECK",				/* CAPWAP_CONFIGURE_TO_DATA_CHECK_STATE */
	"RESET",								/* CAPWAP_RESET_STATE */
	"RESET_TO_DTLS_TEARDOWN",				/* CAPWAP_RESET_TO_DTLS_TEARDOWN_STATE */
	"DATA_CHECK",							/* CAPWAP_DATA_CHECK_STATE */
	"DATA_CHECK_TO_DTLS_TEARDOWN",			/* CAPWAP_DATA_CHECK_TO_DTLS_TEARDOWN_STATE */
	"DATA_CHECK_TO_RUN",					/* CAPWAP_DATA_CHECK_TO_RUN_STATE */
	"RUN",									/* CAPWAP_RUN_STATE */
	"RUN_TO_DTLS_TEARDOWN",					/* CAPWAP_RUN_TO_DTLS_TEARDOWN_STATE */
	"RUN_TO_RESET",							/* CAPWAP_RUN_TO_RESET_STATE */
	"DEAD"									/* CAPWAP_DEAD_STATE */
};

/* */
char* capwap_dfa_getname(int state) {
	if ((state < 0) || (state > CAPWAP_LAST_STATE)) {
		return "";
	}

	return l_nameofstate[state];
}

#else

char* capwap_dfa_getname(int state) {
	return "";
}

#endif
