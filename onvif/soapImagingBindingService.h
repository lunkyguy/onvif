/* soapImagingBindingService.h
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapImagingBindingService_H
#define soapImagingBindingService_H
#include "soapH.h"
class SOAP_CMAC ImagingBindingService
{ public:
	struct soap *soap;
	bool own;
	/// Constructor
	ImagingBindingService();
	/// Constructor to use/share an engine state
	ImagingBindingService(struct soap*);
	/// Constructor with engine input+output mode control
	ImagingBindingService(soap_mode iomode);
	/// Constructor with engine input and output mode control
	ImagingBindingService(soap_mode imode, soap_mode omode);
	/// Destructor, also frees all deserialized data
	virtual ~ImagingBindingService();
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to defaults
	virtual	void reset();
	/// Initializer used by constructor
	virtual	void ImagingBindingService_init(soap_mode imode, soap_mode omode);
	/// Create a copy
	virtual	ImagingBindingService *copy() SOAP_PURE_VIRTUAL;
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
	virtual	int GetServiceCapabilities(_timg__GetServiceCapabilities *timg__GetServiceCapabilities, _timg__GetServiceCapabilitiesResponse *timg__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetImagingSettings' (returns error code or SOAP_OK)
	virtual	int GetImagingSettings(_timg__GetImagingSettings *timg__GetImagingSettings, _timg__GetImagingSettingsResponse *timg__GetImagingSettingsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetImagingSettings' (returns error code or SOAP_OK)
	virtual	int SetImagingSettings(_timg__SetImagingSettings *timg__SetImagingSettings, _timg__SetImagingSettingsResponse *timg__SetImagingSettingsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetOptions' (returns error code or SOAP_OK)
	virtual	int GetOptions(_timg__GetOptions *timg__GetOptions, _timg__GetOptionsResponse *timg__GetOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'Move' (returns error code or SOAP_OK)
	virtual	int Move(_timg__Move *timg__Move, _timg__MoveResponse *timg__MoveResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'Stop' (returns error code or SOAP_OK)
	virtual	int Stop(_timg__Stop *timg__Stop, _timg__StopResponse *timg__StopResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetStatus' (returns error code or SOAP_OK)
	virtual	int GetStatus(_timg__GetStatus *timg__GetStatus, _timg__GetStatusResponse *timg__GetStatusResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetMoveOptions' (returns error code or SOAP_OK)
	virtual	int GetMoveOptions(_timg__GetMoveOptions *timg__GetMoveOptions, _timg__GetMoveOptionsResponse *timg__GetMoveOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetPresets' (returns error code or SOAP_OK)
	virtual	int GetPresets(_timg__GetPresets *timg__GetPresets, _timg__GetPresetsResponse *timg__GetPresetsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetCurrentPreset' (returns error code or SOAP_OK)
	virtual	int GetCurrentPreset(_timg__GetCurrentPreset *timg__GetCurrentPreset, _timg__GetCurrentPresetResponse *timg__GetCurrentPresetResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetCurrentPreset' (returns error code or SOAP_OK)
	virtual	int SetCurrentPreset(_timg__SetCurrentPreset *timg__SetCurrentPreset, _timg__SetCurrentPresetResponse *timg__SetCurrentPresetResponse) SOAP_PURE_VIRTUAL;
};
#endif
