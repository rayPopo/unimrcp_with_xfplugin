/*
 * PLEASE NOTE: 
 * 
 * This file is automatically generated by tag_dll.awk.
 * It contains tag_typedef_t for tag references.
 * 
 * Do not, repeat, do not edit this file. Edit 'stun_tag.c' instead.
 * 
 */

#include "config.h"

#include <sofia-sip/su_tag_class.h>

#if defined _WIN32 || defined HAVE_OPEN_C
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include <stddef.h>

#undef TAG_NAMESPACE
#define TAG_NAMESPACE "stun"

extern tag_typedef_t stuntag_domain;
EXPORT tag_typedef_t stuntag_domain_ref = 
  REFTAG_TYPEDEF(stuntag_domain);
extern tag_typedef_t stuntag_server;
EXPORT tag_typedef_t stuntag_server_ref = 
  REFTAG_TYPEDEF(stuntag_server);
extern tag_typedef_t stuntag_require_integrity;
EXPORT tag_typedef_t stuntag_require_integrity_ref = 
  REFTAG_TYPEDEF(stuntag_require_integrity);
extern tag_typedef_t stuntag_integrity;
EXPORT tag_typedef_t stuntag_integrity_ref = 
  REFTAG_TYPEDEF(stuntag_integrity);
extern tag_typedef_t stuntag_socket;
EXPORT tag_typedef_t stuntag_socket_ref = 
  REFTAG_TYPEDEF(stuntag_socket);
extern tag_typedef_t stuntag_register_events;
EXPORT tag_typedef_t stuntag_register_events_ref = 
  REFTAG_TYPEDEF(stuntag_register_events);
extern tag_typedef_t stuntag_action;
EXPORT tag_typedef_t stuntag_action_ref = 
  REFTAG_TYPEDEF(stuntag_action);
extern tag_typedef_t stuntag_change_ip;
EXPORT tag_typedef_t stuntag_change_ip_ref = 
  REFTAG_TYPEDEF(stuntag_change_ip);
extern tag_typedef_t stuntag_change_port;
EXPORT tag_typedef_t stuntag_change_port_ref = 
  REFTAG_TYPEDEF(stuntag_change_port);
extern tag_typedef_t stuntag_timeout;
EXPORT tag_typedef_t stuntag_timeout_ref = 
  REFTAG_TYPEDEF(stuntag_timeout);

EXPORT tag_type_t stun_tag_list[] =
{
  stuntag_action,
  stuntag_integrity,
  stuntag_server,
  stuntag_require_integrity,
  stuntag_domain,
  stuntag_change_port,
  stuntag_socket,
  stuntag_change_ip,
  stuntag_timeout,
  stuntag_register_events,
  NULL
};