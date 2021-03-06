/* @@@LICENSE
*
*      Copyright (c) 2009-2011 Hewlett-Packard Development Company, L.P.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* LICENSE@@@ */

/*
 * ClientPeerLeafFallbackNeg.h
 *
 */


#ifndef CLIENTPEERLEAFFALLBACKNEG_H_
#define CLIENTPEERLEAFFALLBACKNEG_H_


#include "ClientPeerShouldFailSSL.h"


/**
 * ClientPeer - initate connection from client side
 * LeafFallbackNeg - negation of leaf fallback test, meaning, LeafFallback is not enabled,
 * certain errors are expected during connection attempt
 */
class ClientPeerLeafFallbackNeg : public ClientPeerShouldFailSSL {
public:
	ClientPeerLeafFallbackNeg(PeerBaseParams& params);

	/** IConnectCallback */
	virtual void OnConnect(PmSockIOChannel *pChannel, PslError errorCode);
};


#endif /* CLIENTPEERLEAFFALLBACKNEG_H_ */
