/* soapThermalBindingProxy.h
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapThermalBindingProxy_H
#define soapThermalBindingProxy_H
#include "soapH.h"

class SOAP_CMAC ThermalBindingProxy
{ public:
	struct soap *soap;
	bool own;
	/// Endpoint URL of service 'ThermalBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	ThermalBindingProxy();
	/// Constructor to use/share an engine state
	ThermalBindingProxy(struct soap*);
	/// Constructor with endpoint URL
	ThermalBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	ThermalBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	ThermalBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	ThermalBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~ThermalBindingProxy();
	/// Initializer used by constructors
	virtual	void ThermalBindingProxy_init(soap_mode imode, soap_mode omode);
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

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_ns12__GetServiceCapabilities *ns12__GetServiceCapabilities, _ns12__GetServiceCapabilitiesResponse *ns12__GetServiceCapabilitiesResponse) { return this->GetServiceCapabilities(NULL, NULL, ns12__GetServiceCapabilities, ns12__GetServiceCapabilitiesResponse); }
	virtual	int GetServiceCapabilities(const char *endpoint, const char *soap_action, _ns12__GetServiceCapabilities *ns12__GetServiceCapabilities, _ns12__GetServiceCapabilitiesResponse *ns12__GetServiceCapabilitiesResponse);

	/// Web service operation 'GetConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetConfigurationOptions(_ns12__GetConfigurationOptions *ns12__GetConfigurationOptions, _ns12__GetConfigurationOptionsResponse *ns12__GetConfigurationOptionsResponse) { return this->GetConfigurationOptions(NULL, NULL, ns12__GetConfigurationOptions, ns12__GetConfigurationOptionsResponse); }
	virtual	int GetConfigurationOptions(const char *endpoint, const char *soap_action, _ns12__GetConfigurationOptions *ns12__GetConfigurationOptions, _ns12__GetConfigurationOptionsResponse *ns12__GetConfigurationOptionsResponse);

	/// Web service operation 'GetConfiguration' (returns error code or SOAP_OK)
	virtual	int GetConfiguration(_ns12__GetConfiguration *ns12__GetConfiguration, _ns12__GetConfigurationResponse *ns12__GetConfigurationResponse) { return this->GetConfiguration(NULL, NULL, ns12__GetConfiguration, ns12__GetConfigurationResponse); }
	virtual	int GetConfiguration(const char *endpoint, const char *soap_action, _ns12__GetConfiguration *ns12__GetConfiguration, _ns12__GetConfigurationResponse *ns12__GetConfigurationResponse);

	/// Web service operation 'GetConfigurations' (returns error code or SOAP_OK)
	virtual	int GetConfigurations(_ns12__GetConfigurations *ns12__GetConfigurations, _ns12__GetConfigurationsResponse *ns12__GetConfigurationsResponse) { return this->GetConfigurations(NULL, NULL, ns12__GetConfigurations, ns12__GetConfigurationsResponse); }
	virtual	int GetConfigurations(const char *endpoint, const char *soap_action, _ns12__GetConfigurations *ns12__GetConfigurations, _ns12__GetConfigurationsResponse *ns12__GetConfigurationsResponse);

	/// Web service operation 'SetConfiguration' (returns error code or SOAP_OK)
	virtual	int SetConfiguration(_ns12__SetConfiguration *ns12__SetConfiguration, _ns12__SetConfigurationResponse *ns12__SetConfigurationResponse) { return this->SetConfiguration(NULL, NULL, ns12__SetConfiguration, ns12__SetConfigurationResponse); }
	virtual	int SetConfiguration(const char *endpoint, const char *soap_action, _ns12__SetConfiguration *ns12__SetConfiguration, _ns12__SetConfigurationResponse *ns12__SetConfigurationResponse);

	/// Web service operation 'GetRadiometryConfigurationOptions' (returns error code or SOAP_OK)
	virtual	int GetRadiometryConfigurationOptions(_ns12__GetRadiometryConfigurationOptions *ns12__GetRadiometryConfigurationOptions, _ns12__GetRadiometryConfigurationOptionsResponse *ns12__GetRadiometryConfigurationOptionsResponse) { return this->GetRadiometryConfigurationOptions(NULL, NULL, ns12__GetRadiometryConfigurationOptions, ns12__GetRadiometryConfigurationOptionsResponse); }
	virtual	int GetRadiometryConfigurationOptions(const char *endpoint, const char *soap_action, _ns12__GetRadiometryConfigurationOptions *ns12__GetRadiometryConfigurationOptions, _ns12__GetRadiometryConfigurationOptionsResponse *ns12__GetRadiometryConfigurationOptionsResponse);

	/// Web service operation 'GetRadiometryConfiguration' (returns error code or SOAP_OK)
	virtual	int GetRadiometryConfiguration(_ns12__GetRadiometryConfiguration *ns12__GetRadiometryConfiguration, _ns12__GetRadiometryConfigurationResponse *ns12__GetRadiometryConfigurationResponse) { return this->GetRadiometryConfiguration(NULL, NULL, ns12__GetRadiometryConfiguration, ns12__GetRadiometryConfigurationResponse); }
	virtual	int GetRadiometryConfiguration(const char *endpoint, const char *soap_action, _ns12__GetRadiometryConfiguration *ns12__GetRadiometryConfiguration, _ns12__GetRadiometryConfigurationResponse *ns12__GetRadiometryConfigurationResponse);

	/// Web service operation 'SetRadiometryConfiguration' (returns error code or SOAP_OK)
	virtual	int SetRadiometryConfiguration(_ns12__SetRadiometryConfiguration *ns12__SetRadiometryConfiguration, _ns12__SetRadiometryConfigurationResponse *ns12__SetRadiometryConfigurationResponse) { return this->SetRadiometryConfiguration(NULL, NULL, ns12__SetRadiometryConfiguration, ns12__SetRadiometryConfigurationResponse); }
	virtual	int SetRadiometryConfiguration(const char *endpoint, const char *soap_action, _ns12__SetRadiometryConfiguration *ns12__SetRadiometryConfiguration, _ns12__SetRadiometryConfigurationResponse *ns12__SetRadiometryConfigurationResponse);
};
#endif
