#ifndef LWMQTT_UNSUBSCRIBE_H
#define LWMQTT_UNSUBSCRIBE_H

#include "helpers.h"
#include "packet.h"

/**
  * Encodes the supplied unsubscribe data into the supplied buffer, ready for sending
  *
  * @param buf the raw buffer data, of the correct length determined by the remaining length field
  * @param buf_len the length in bytes of the data in the supplied buffer
  * @param dup integer - the MQTT dup flag
  * @param packet_id integer - the MQTT packet identifier
  * @param count - number of members in the topicFilters array
  * @param topic_filters - array of topic filter names
  * @return the length of the encoded data.  <= 0 indicates error
  */
lwmqtt_err_t lwmqtt_encode_unsubscribe(unsigned char *buf, int buf_len, int *len, unsigned short packet_id, int count,
                                       lwmqtt_string_t *topic_filters);
#endif  // LWMQTT_UNSUBSCRIBE_H
