#ifndef LWIP_HDR_IP4_ROUTE_H
#define LWIP_HDR_IP4_ROUTE_H

#include "lwip/opt.h"
#include "lwip/def.h"

#if LWIP_IPV4

#ifdef __cplusplus
extern "C" {
#endif


struct ip4_route {
  ip4_addr_t dest;
  ip4_addr_t nexthop;
  char prefixlen;
  char iface;
  char valid;
};

extern void ip4_route_add(const struct ip4_route *route);
extern void ip4_route_delete(const struct ip4_route *route);
extern int ip4_route_getlen();
extern const struct ip4_route *ip4_route_get(int idx);

#ifdef __cplusplus
}
#endif

#endif /* LWIP_IPV4 */

#endif /* LWIP_HDR_IP_ADDR_H */
