/* soapDoorControlBindingService.h
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapDoorControlBindingService_H
#define soapDoorControlBindingService_H
#include "soapH.h"
class SOAP_CMAC DoorControlBindingService
{ public:
	struct soap *soap;
	bool own;
	/// Constructor
	DoorControlBindingService();
	/// Constructor to use/share an engine state
	DoorControlBindingService(struct soap*);
	/// Constructor with engine input+output mode control
	DoorControlBindingService(soap_mode iomode);
	/// Constructor with engine input and output mode control
	DoorControlBindingService(soap_mode imode, soap_mode omode);
	/// Destructor, also frees all deserialized data
	virtual ~DoorControlBindingService();
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to defaults
	virtual	void reset();
	/// Initializer used by constructor
	virtual	void DoorControlBindingService_init(soap_mode imode, soap_mode omode);
	/// Create a copy
	virtual	DoorControlBindingService *copy() SOAP_PURE_VIRTUAL;
	/// Close connection (normally automatic)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Return sender-related fault to sender
	virtual	int soap_senderfault(const char *string, const char *detailXML);
	/// Return sender-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Return receiver-related fault to sender
	virtual	int soap_receiverfault(const char *string, const char *detailXML);
	/// Return receiver-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
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
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Run simple single-thread iterative service on port until a connection error occurs (returns error code or SOAP_OK), use this->bind_flag = SO_REUSEADDR to rebind for a rerun
	virtual	int run(int port);
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog);
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept();
#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
	/// Then accept SSL handshake, when SSL is used
	virtual	int ssl_accept();
#endif
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve();
	/// Used by serve() to dispatch a request (returns error code or SOAP_OK)
	virtual	int dispatch();

	///
	/// Service operations (you should define these):
	/// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
	///

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_ns8__GetServiceCapabilities *ns8__GetServiceCapabilities, _ns8__GetServiceCapabilitiesResponse *ns8__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDoorInfoList' (returns error code or SOAP_OK)
	virtual	int GetDoorInfoList(_ns8__GetDoorInfoList *ns8__GetDoorInfoList, _ns8__GetDoorInfoListResponse *ns8__GetDoorInfoListResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDoorInfo' (returns error code or SOAP_OK)
	virtual	int GetDoorInfo(_ns8__GetDoorInfo *ns8__GetDoorInfo, _ns8__GetDoorInfoResponse *ns8__GetDoorInfoResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDoorList' (returns error code or SOAP_OK)
	virtual	int GetDoorList(_ns8__GetDoorList *ns8__GetDoorList, _ns8__GetDoorListResponse *ns8__GetDoorListResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDoors' (returns error code or SOAP_OK)
	virtual	int GetDoors(_ns8__GetDoors *ns8__GetDoors, _ns8__GetDoorsResponse *ns8__GetDoorsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreateDoor' (returns error code or SOAP_OK)
	virtual	int CreateDoor(_ns8__CreateDoor *ns8__CreateDoor, _ns8__CreateDoorResponse *ns8__CreateDoorResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetDoor' (returns error code or SOAP_OK)
	virtual	int SetDoor(_ns8__SetDoor *ns8__SetDoor, _ns8__SetDoorResponse *ns8__SetDoorResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'ModifyDoor' (returns error code or SOAP_OK)
	virtual	int ModifyDoor(_ns8__ModifyDoor *ns8__ModifyDoor, _ns8__ModifyDoorResponse *ns8__ModifyDoorResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeleteDoor' (returns error code or SOAP_OK)
	virtual	int DeleteDoor(_ns8__DeleteDoor *ns8__DeleteDoor, _ns8__DeleteDoorResponse *ns8__DeleteDoorResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDoorState' (returns error code or SOAP_OK)
	virtual	int GetDoorState(_ns8__GetDoorState *ns8__GetDoorState, _ns8__GetDoorStateResponse *ns8__GetDoorStateResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'AccessDoor' (returns error code or SOAP_OK)
	virtual	int AccessDoor(_ns8__AccessDoor *ns8__AccessDoor, _ns8__AccessDoorResponse *ns8__AccessDoorResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'LockDoor' (returns error code or SOAP_OK)
	virtual	int LockDoor(_ns8__LockDoor *ns8__LockDoor, _ns8__LockDoorResponse *ns8__LockDoorResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'UnlockDoor' (returns error code or SOAP_OK)
	virtual	int UnlockDoor(_ns8__UnlockDoor *ns8__UnlockDoor, _ns8__UnlockDoorResponse *ns8__UnlockDoorResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'BlockDoor' (returns error code or SOAP_OK)
	virtual	int BlockDoor(_ns8__BlockDoor *ns8__BlockDoor, _ns8__BlockDoorResponse *ns8__BlockDoorResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'LockDownDoor' (returns error code or SOAP_OK)
	virtual	int LockDownDoor(_ns8__LockDownDoor *ns8__LockDownDoor, _ns8__LockDownDoorResponse *ns8__LockDownDoorResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'LockDownReleaseDoor' (returns error code or SOAP_OK)
	virtual	int LockDownReleaseDoor(_ns8__LockDownReleaseDoor *ns8__LockDownReleaseDoor, _ns8__LockDownReleaseDoorResponse *ns8__LockDownReleaseDoorResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'LockOpenDoor' (returns error code or SOAP_OK)
	virtual	int LockOpenDoor(_ns8__LockOpenDoor *ns8__LockOpenDoor, _ns8__LockOpenDoorResponse *ns8__LockOpenDoorResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'LockOpenReleaseDoor' (returns error code or SOAP_OK)
	virtual	int LockOpenReleaseDoor(_ns8__LockOpenReleaseDoor *ns8__LockOpenReleaseDoor, _ns8__LockOpenReleaseDoorResponse *ns8__LockOpenReleaseDoorResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DoubleLockDoor' (returns error code or SOAP_OK)
	virtual	int DoubleLockDoor(_ns8__DoubleLockDoor *ns8__DoubleLockDoor, _ns8__DoubleLockDoorResponse *ns8__DoubleLockDoorResponse) SOAP_PURE_VIRTUAL;
};
#endif
