/* soapCredentialBindingProxy.h
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapCredentialBindingProxy_H
#define soapCredentialBindingProxy_H
#include "soapH.h"

class SOAP_CMAC CredentialBindingProxy
{ public:
	struct soap *soap;
	bool own;
	/// Endpoint URL of service 'CredentialBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	CredentialBindingProxy();
	/// Constructor to use/share an engine state
	CredentialBindingProxy(struct soap*);
	/// Constructor with endpoint URL
	CredentialBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	CredentialBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	CredentialBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	CredentialBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~CredentialBindingProxy();
	/// Initializer used by constructors
	virtual	void CredentialBindingProxy_init(soap_mode imode, soap_mode omode);
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
	virtual	int GetServiceCapabilities(_ns7__GetServiceCapabilities *ns7__GetServiceCapabilities, _ns7__GetServiceCapabilitiesResponse *ns7__GetServiceCapabilitiesResponse) { return this->GetServiceCapabilities(NULL, NULL, ns7__GetServiceCapabilities, ns7__GetServiceCapabilitiesResponse); }
	virtual	int GetServiceCapabilities(const char *endpoint, const char *soap_action, _ns7__GetServiceCapabilities *ns7__GetServiceCapabilities, _ns7__GetServiceCapabilitiesResponse *ns7__GetServiceCapabilitiesResponse);

	/// Web service operation 'GetSupportedFormatTypes' (returns error code or SOAP_OK)
	virtual	int GetSupportedFormatTypes(_ns7__GetSupportedFormatTypes *ns7__GetSupportedFormatTypes, _ns7__GetSupportedFormatTypesResponse *ns7__GetSupportedFormatTypesResponse) { return this->GetSupportedFormatTypes(NULL, NULL, ns7__GetSupportedFormatTypes, ns7__GetSupportedFormatTypesResponse); }
	virtual	int GetSupportedFormatTypes(const char *endpoint, const char *soap_action, _ns7__GetSupportedFormatTypes *ns7__GetSupportedFormatTypes, _ns7__GetSupportedFormatTypesResponse *ns7__GetSupportedFormatTypesResponse);

	/// Web service operation 'GetCredentialInfo' (returns error code or SOAP_OK)
	virtual	int GetCredentialInfo(_ns7__GetCredentialInfo *ns7__GetCredentialInfo, _ns7__GetCredentialInfoResponse *ns7__GetCredentialInfoResponse) { return this->GetCredentialInfo(NULL, NULL, ns7__GetCredentialInfo, ns7__GetCredentialInfoResponse); }
	virtual	int GetCredentialInfo(const char *endpoint, const char *soap_action, _ns7__GetCredentialInfo *ns7__GetCredentialInfo, _ns7__GetCredentialInfoResponse *ns7__GetCredentialInfoResponse);

	/// Web service operation 'GetCredentialInfoList' (returns error code or SOAP_OK)
	virtual	int GetCredentialInfoList(_ns7__GetCredentialInfoList *ns7__GetCredentialInfoList, _ns7__GetCredentialInfoListResponse *ns7__GetCredentialInfoListResponse) { return this->GetCredentialInfoList(NULL, NULL, ns7__GetCredentialInfoList, ns7__GetCredentialInfoListResponse); }
	virtual	int GetCredentialInfoList(const char *endpoint, const char *soap_action, _ns7__GetCredentialInfoList *ns7__GetCredentialInfoList, _ns7__GetCredentialInfoListResponse *ns7__GetCredentialInfoListResponse);

	/// Web service operation 'GetCredentials' (returns error code or SOAP_OK)
	virtual	int GetCredentials(_ns7__GetCredentials *ns7__GetCredentials, _ns7__GetCredentialsResponse *ns7__GetCredentialsResponse) { return this->GetCredentials(NULL, NULL, ns7__GetCredentials, ns7__GetCredentialsResponse); }
	virtual	int GetCredentials(const char *endpoint, const char *soap_action, _ns7__GetCredentials *ns7__GetCredentials, _ns7__GetCredentialsResponse *ns7__GetCredentialsResponse);

	/// Web service operation 'GetCredentialList' (returns error code or SOAP_OK)
	virtual	int GetCredentialList(_ns7__GetCredentialList *ns7__GetCredentialList, _ns7__GetCredentialListResponse *ns7__GetCredentialListResponse) { return this->GetCredentialList(NULL, NULL, ns7__GetCredentialList, ns7__GetCredentialListResponse); }
	virtual	int GetCredentialList(const char *endpoint, const char *soap_action, _ns7__GetCredentialList *ns7__GetCredentialList, _ns7__GetCredentialListResponse *ns7__GetCredentialListResponse);

	/// Web service operation 'CreateCredential' (returns error code or SOAP_OK)
	virtual	int CreateCredential(_ns7__CreateCredential *ns7__CreateCredential, _ns7__CreateCredentialResponse *ns7__CreateCredentialResponse) { return this->CreateCredential(NULL, NULL, ns7__CreateCredential, ns7__CreateCredentialResponse); }
	virtual	int CreateCredential(const char *endpoint, const char *soap_action, _ns7__CreateCredential *ns7__CreateCredential, _ns7__CreateCredentialResponse *ns7__CreateCredentialResponse);

	/// Web service operation 'SetCredential' (returns error code or SOAP_OK)
	virtual	int SetCredential(_ns7__SetCredential *ns7__SetCredential, _ns7__SetCredentialResponse *ns7__SetCredentialResponse) { return this->SetCredential(NULL, NULL, ns7__SetCredential, ns7__SetCredentialResponse); }
	virtual	int SetCredential(const char *endpoint, const char *soap_action, _ns7__SetCredential *ns7__SetCredential, _ns7__SetCredentialResponse *ns7__SetCredentialResponse);

	/// Web service operation 'ModifyCredential' (returns error code or SOAP_OK)
	virtual	int ModifyCredential(_ns7__ModifyCredential *ns7__ModifyCredential, _ns7__ModifyCredentialResponse *ns7__ModifyCredentialResponse) { return this->ModifyCredential(NULL, NULL, ns7__ModifyCredential, ns7__ModifyCredentialResponse); }
	virtual	int ModifyCredential(const char *endpoint, const char *soap_action, _ns7__ModifyCredential *ns7__ModifyCredential, _ns7__ModifyCredentialResponse *ns7__ModifyCredentialResponse);

	/// Web service operation 'DeleteCredential' (returns error code or SOAP_OK)
	virtual	int DeleteCredential(_ns7__DeleteCredential *ns7__DeleteCredential, _ns7__DeleteCredentialResponse *ns7__DeleteCredentialResponse) { return this->DeleteCredential(NULL, NULL, ns7__DeleteCredential, ns7__DeleteCredentialResponse); }
	virtual	int DeleteCredential(const char *endpoint, const char *soap_action, _ns7__DeleteCredential *ns7__DeleteCredential, _ns7__DeleteCredentialResponse *ns7__DeleteCredentialResponse);

	/// Web service operation 'GetCredentialState' (returns error code or SOAP_OK)
	virtual	int GetCredentialState(_ns7__GetCredentialState *ns7__GetCredentialState, _ns7__GetCredentialStateResponse *ns7__GetCredentialStateResponse) { return this->GetCredentialState(NULL, NULL, ns7__GetCredentialState, ns7__GetCredentialStateResponse); }
	virtual	int GetCredentialState(const char *endpoint, const char *soap_action, _ns7__GetCredentialState *ns7__GetCredentialState, _ns7__GetCredentialStateResponse *ns7__GetCredentialStateResponse);

	/// Web service operation 'EnableCredential' (returns error code or SOAP_OK)
	virtual	int EnableCredential(_ns7__EnableCredential *ns7__EnableCredential, _ns7__EnableCredentialResponse *ns7__EnableCredentialResponse) { return this->EnableCredential(NULL, NULL, ns7__EnableCredential, ns7__EnableCredentialResponse); }
	virtual	int EnableCredential(const char *endpoint, const char *soap_action, _ns7__EnableCredential *ns7__EnableCredential, _ns7__EnableCredentialResponse *ns7__EnableCredentialResponse);

	/// Web service operation 'DisableCredential' (returns error code or SOAP_OK)
	virtual	int DisableCredential(_ns7__DisableCredential *ns7__DisableCredential, _ns7__DisableCredentialResponse *ns7__DisableCredentialResponse) { return this->DisableCredential(NULL, NULL, ns7__DisableCredential, ns7__DisableCredentialResponse); }
	virtual	int DisableCredential(const char *endpoint, const char *soap_action, _ns7__DisableCredential *ns7__DisableCredential, _ns7__DisableCredentialResponse *ns7__DisableCredentialResponse);

	/// Web service operation 'ResetAntipassbackViolation' (returns error code or SOAP_OK)
	virtual	int ResetAntipassbackViolation(_ns7__ResetAntipassbackViolation *ns7__ResetAntipassbackViolation, _ns7__ResetAntipassbackViolationResponse *ns7__ResetAntipassbackViolationResponse) { return this->ResetAntipassbackViolation(NULL, NULL, ns7__ResetAntipassbackViolation, ns7__ResetAntipassbackViolationResponse); }
	virtual	int ResetAntipassbackViolation(const char *endpoint, const char *soap_action, _ns7__ResetAntipassbackViolation *ns7__ResetAntipassbackViolation, _ns7__ResetAntipassbackViolationResponse *ns7__ResetAntipassbackViolationResponse);

	/// Web service operation 'GetCredentialIdentifiers' (returns error code or SOAP_OK)
	virtual	int GetCredentialIdentifiers(_ns7__GetCredentialIdentifiers *ns7__GetCredentialIdentifiers, _ns7__GetCredentialIdentifiersResponse *ns7__GetCredentialIdentifiersResponse) { return this->GetCredentialIdentifiers(NULL, NULL, ns7__GetCredentialIdentifiers, ns7__GetCredentialIdentifiersResponse); }
	virtual	int GetCredentialIdentifiers(const char *endpoint, const char *soap_action, _ns7__GetCredentialIdentifiers *ns7__GetCredentialIdentifiers, _ns7__GetCredentialIdentifiersResponse *ns7__GetCredentialIdentifiersResponse);

	/// Web service operation 'SetCredentialIdentifier' (returns error code or SOAP_OK)
	virtual	int SetCredentialIdentifier(_ns7__SetCredentialIdentifier *ns7__SetCredentialIdentifier, _ns7__SetCredentialIdentifierResponse *ns7__SetCredentialIdentifierResponse) { return this->SetCredentialIdentifier(NULL, NULL, ns7__SetCredentialIdentifier, ns7__SetCredentialIdentifierResponse); }
	virtual	int SetCredentialIdentifier(const char *endpoint, const char *soap_action, _ns7__SetCredentialIdentifier *ns7__SetCredentialIdentifier, _ns7__SetCredentialIdentifierResponse *ns7__SetCredentialIdentifierResponse);

	/// Web service operation 'DeleteCredentialIdentifier' (returns error code or SOAP_OK)
	virtual	int DeleteCredentialIdentifier(_ns7__DeleteCredentialIdentifier *ns7__DeleteCredentialIdentifier, _ns7__DeleteCredentialIdentifierResponse *ns7__DeleteCredentialIdentifierResponse) { return this->DeleteCredentialIdentifier(NULL, NULL, ns7__DeleteCredentialIdentifier, ns7__DeleteCredentialIdentifierResponse); }
	virtual	int DeleteCredentialIdentifier(const char *endpoint, const char *soap_action, _ns7__DeleteCredentialIdentifier *ns7__DeleteCredentialIdentifier, _ns7__DeleteCredentialIdentifierResponse *ns7__DeleteCredentialIdentifierResponse);

	/// Web service operation 'GetCredentialAccessProfiles' (returns error code or SOAP_OK)
	virtual	int GetCredentialAccessProfiles(_ns7__GetCredentialAccessProfiles *ns7__GetCredentialAccessProfiles, _ns7__GetCredentialAccessProfilesResponse *ns7__GetCredentialAccessProfilesResponse) { return this->GetCredentialAccessProfiles(NULL, NULL, ns7__GetCredentialAccessProfiles, ns7__GetCredentialAccessProfilesResponse); }
	virtual	int GetCredentialAccessProfiles(const char *endpoint, const char *soap_action, _ns7__GetCredentialAccessProfiles *ns7__GetCredentialAccessProfiles, _ns7__GetCredentialAccessProfilesResponse *ns7__GetCredentialAccessProfilesResponse);

	/// Web service operation 'SetCredentialAccessProfiles' (returns error code or SOAP_OK)
	virtual	int SetCredentialAccessProfiles(_ns7__SetCredentialAccessProfiles *ns7__SetCredentialAccessProfiles, _ns7__SetCredentialAccessProfilesResponse *ns7__SetCredentialAccessProfilesResponse) { return this->SetCredentialAccessProfiles(NULL, NULL, ns7__SetCredentialAccessProfiles, ns7__SetCredentialAccessProfilesResponse); }
	virtual	int SetCredentialAccessProfiles(const char *endpoint, const char *soap_action, _ns7__SetCredentialAccessProfiles *ns7__SetCredentialAccessProfiles, _ns7__SetCredentialAccessProfilesResponse *ns7__SetCredentialAccessProfilesResponse);

	/// Web service operation 'DeleteCredentialAccessProfiles' (returns error code or SOAP_OK)
	virtual	int DeleteCredentialAccessProfiles(_ns7__DeleteCredentialAccessProfiles *ns7__DeleteCredentialAccessProfiles, _ns7__DeleteCredentialAccessProfilesResponse *ns7__DeleteCredentialAccessProfilesResponse) { return this->DeleteCredentialAccessProfiles(NULL, NULL, ns7__DeleteCredentialAccessProfiles, ns7__DeleteCredentialAccessProfilesResponse); }
	virtual	int DeleteCredentialAccessProfiles(const char *endpoint, const char *soap_action, _ns7__DeleteCredentialAccessProfiles *ns7__DeleteCredentialAccessProfiles, _ns7__DeleteCredentialAccessProfilesResponse *ns7__DeleteCredentialAccessProfilesResponse);
};
#endif