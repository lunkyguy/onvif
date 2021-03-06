/* soapPullPointBindingProxy.h
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapPullPointBindingProxy_H
#define soapPullPointBindingProxy_H
#include "soapH.h"

class SOAP_CMAC PullPointBindingProxy
{ public:
	struct soap *soap;
	bool own;
	/// Endpoint URL of service 'PullPointBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	PullPointBindingProxy();
	/// Constructor to use/share an engine state
	PullPointBindingProxy(struct soap*);
	/// Constructor with endpoint URL
	PullPointBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	PullPointBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	PullPointBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	PullPointBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~PullPointBindingProxy();
	/// Initializer used by constructors
	virtual	void PullPointBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'GetMessages' (returns error code or SOAP_OK)
	virtual	int GetMessages(_wsnt__GetMessages *wsnt__GetMessages, _wsnt__GetMessagesResponse *wsnt__GetMessagesResponse) { return this->GetMessages(NULL, NULL, wsnt__GetMessages, wsnt__GetMessagesResponse); }
	virtual	int GetMessages(const char *endpoint, const char *soap_action, _wsnt__GetMessages *wsnt__GetMessages, _wsnt__GetMessagesResponse *wsnt__GetMessagesResponse);

	/// Web service operation 'DestroyPullPoint' (returns error code or SOAP_OK)
	virtual	int DestroyPullPoint(_wsnt__DestroyPullPoint *wsnt__DestroyPullPoint, _wsnt__DestroyPullPointResponse *wsnt__DestroyPullPointResponse) { return this->DestroyPullPoint(NULL, NULL, wsnt__DestroyPullPoint, wsnt__DestroyPullPointResponse); }
	virtual	int DestroyPullPoint(const char *endpoint, const char *soap_action, _wsnt__DestroyPullPoint *wsnt__DestroyPullPoint, _wsnt__DestroyPullPointResponse *wsnt__DestroyPullPointResponse);

	/// Web service one-way send operation 'send_Notify' (returns error code or SOAP_OK)
	virtual	int send_Notify(_wsnt__Notify *wsnt__Notify) { return this->send_Notify(NULL, NULL, wsnt__Notify); }
	virtual	int send_Notify(const char *endpoint, const char *soap_action, _wsnt__Notify *wsnt__Notify);
	/// Web service one-way receive operation 'recv_Notify' (returns error code or SOAP_OK);
	virtual	int recv_Notify(struct __name12__Notify&);
	/// Web service receive of HTTP Accept acknowledgment for one-way send operation 'send_Notify' (returns error code or SOAP_OK)
	virtual	int recv_Notify_empty_response() { return soap_recv_empty_response(this->soap); }
	/// Web service one-way synchronous send operation 'Notify' with HTTP Accept/OK response receive (returns error code or SOAP_OK)
	virtual	int Notify(_wsnt__Notify *wsnt__Notify) { return this->Notify(NULL, NULL, wsnt__Notify); }
	virtual	int Notify(const char *endpoint, const char *soap_action, _wsnt__Notify *wsnt__Notify) { if (this->send_Notify(endpoint, soap_action, wsnt__Notify) || soap_recv_empty_response(this->soap)) return this->soap->error; return SOAP_OK; }
};
#endif
