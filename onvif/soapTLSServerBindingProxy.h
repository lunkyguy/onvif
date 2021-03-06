/* soapTLSServerBindingProxy.h
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapTLSServerBindingProxy_H
#define soapTLSServerBindingProxy_H
#include "soapH.h"

class SOAP_CMAC TLSServerBindingProxy
{ public:
	struct soap *soap;
	bool own;
	/// Endpoint URL of service 'TLSServerBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	TLSServerBindingProxy();
	/// Constructor to use/share an engine state
	TLSServerBindingProxy(struct soap*);
	/// Constructor with endpoint URL
	TLSServerBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	TLSServerBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	TLSServerBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	TLSServerBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~TLSServerBindingProxy();
	/// Initializer used by constructors
	virtual	void TLSServerBindingProxy_init(soap_mode imode, soap_mode omode);
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

	/// Web service operation 'AddServerCertificateAssignment' (returns error code or SOAP_OK)
	virtual	int AddServerCertificateAssignment(_ns5__AddServerCertificateAssignment *ns5__AddServerCertificateAssignment, _ns5__AddServerCertificateAssignmentResponse *ns5__AddServerCertificateAssignmentResponse) { return this->AddServerCertificateAssignment(NULL, NULL, ns5__AddServerCertificateAssignment, ns5__AddServerCertificateAssignmentResponse); }
	virtual	int AddServerCertificateAssignment(const char *endpoint, const char *soap_action, _ns5__AddServerCertificateAssignment *ns5__AddServerCertificateAssignment, _ns5__AddServerCertificateAssignmentResponse *ns5__AddServerCertificateAssignmentResponse);

	/// Web service operation 'RemoveServerCertificateAssignment' (returns error code or SOAP_OK)
	virtual	int RemoveServerCertificateAssignment(_ns5__RemoveServerCertificateAssignment *ns5__RemoveServerCertificateAssignment, _ns5__RemoveServerCertificateAssignmentResponse *ns5__RemoveServerCertificateAssignmentResponse) { return this->RemoveServerCertificateAssignment(NULL, NULL, ns5__RemoveServerCertificateAssignment, ns5__RemoveServerCertificateAssignmentResponse); }
	virtual	int RemoveServerCertificateAssignment(const char *endpoint, const char *soap_action, _ns5__RemoveServerCertificateAssignment *ns5__RemoveServerCertificateAssignment, _ns5__RemoveServerCertificateAssignmentResponse *ns5__RemoveServerCertificateAssignmentResponse);

	/// Web service operation 'ReplaceServerCertificateAssignment' (returns error code or SOAP_OK)
	virtual	int ReplaceServerCertificateAssignment(_ns5__ReplaceServerCertificateAssignment *ns5__ReplaceServerCertificateAssignment, _ns5__ReplaceServerCertificateAssignmentResponse *ns5__ReplaceServerCertificateAssignmentResponse) { return this->ReplaceServerCertificateAssignment(NULL, NULL, ns5__ReplaceServerCertificateAssignment, ns5__ReplaceServerCertificateAssignmentResponse); }
	virtual	int ReplaceServerCertificateAssignment(const char *endpoint, const char *soap_action, _ns5__ReplaceServerCertificateAssignment *ns5__ReplaceServerCertificateAssignment, _ns5__ReplaceServerCertificateAssignmentResponse *ns5__ReplaceServerCertificateAssignmentResponse);

	/// Web service operation 'GetAssignedServerCertificates' (returns error code or SOAP_OK)
	virtual	int GetAssignedServerCertificates(_ns5__GetAssignedServerCertificates *ns5__GetAssignedServerCertificates, _ns5__GetAssignedServerCertificatesResponse *ns5__GetAssignedServerCertificatesResponse) { return this->GetAssignedServerCertificates(NULL, NULL, ns5__GetAssignedServerCertificates, ns5__GetAssignedServerCertificatesResponse); }
	virtual	int GetAssignedServerCertificates(const char *endpoint, const char *soap_action, _ns5__GetAssignedServerCertificates *ns5__GetAssignedServerCertificates, _ns5__GetAssignedServerCertificatesResponse *ns5__GetAssignedServerCertificatesResponse);

	/// Web service operation 'SetClientAuthenticationRequired' (returns error code or SOAP_OK)
	virtual	int SetClientAuthenticationRequired(_ns5__SetClientAuthenticationRequired *ns5__SetClientAuthenticationRequired, _ns5__SetClientAuthenticationRequiredResponse *ns5__SetClientAuthenticationRequiredResponse) { return this->SetClientAuthenticationRequired(NULL, NULL, ns5__SetClientAuthenticationRequired, ns5__SetClientAuthenticationRequiredResponse); }
	virtual	int SetClientAuthenticationRequired(const char *endpoint, const char *soap_action, _ns5__SetClientAuthenticationRequired *ns5__SetClientAuthenticationRequired, _ns5__SetClientAuthenticationRequiredResponse *ns5__SetClientAuthenticationRequiredResponse);

	/// Web service operation 'GetClientAuthenticationRequired' (returns error code or SOAP_OK)
	virtual	int GetClientAuthenticationRequired(_ns5__GetClientAuthenticationRequired *ns5__GetClientAuthenticationRequired, _ns5__GetClientAuthenticationRequiredResponse *ns5__GetClientAuthenticationRequiredResponse) { return this->GetClientAuthenticationRequired(NULL, NULL, ns5__GetClientAuthenticationRequired, ns5__GetClientAuthenticationRequiredResponse); }
	virtual	int GetClientAuthenticationRequired(const char *endpoint, const char *soap_action, _ns5__GetClientAuthenticationRequired *ns5__GetClientAuthenticationRequired, _ns5__GetClientAuthenticationRequiredResponse *ns5__GetClientAuthenticationRequiredResponse);

	/// Web service operation 'AddCertPathValidationPolicyAssignment' (returns error code or SOAP_OK)
	virtual	int AddCertPathValidationPolicyAssignment(_ns5__AddCertPathValidationPolicyAssignment *ns5__AddCertPathValidationPolicyAssignment, _ns5__AddCertPathValidationPolicyAssignmentResponse *ns5__AddCertPathValidationPolicyAssignmentResponse) { return this->AddCertPathValidationPolicyAssignment(NULL, NULL, ns5__AddCertPathValidationPolicyAssignment, ns5__AddCertPathValidationPolicyAssignmentResponse); }
	virtual	int AddCertPathValidationPolicyAssignment(const char *endpoint, const char *soap_action, _ns5__AddCertPathValidationPolicyAssignment *ns5__AddCertPathValidationPolicyAssignment, _ns5__AddCertPathValidationPolicyAssignmentResponse *ns5__AddCertPathValidationPolicyAssignmentResponse);

	/// Web service operation 'RemoveCertPathValidationPolicyAssignment' (returns error code or SOAP_OK)
	virtual	int RemoveCertPathValidationPolicyAssignment(_ns5__RemoveCertPathValidationPolicyAssignment *ns5__RemoveCertPathValidationPolicyAssignment, _ns5__RemoveCertPathValidationPolicyAssignmentResponse *ns5__RemoveCertPathValidationPolicyAssignmentResponse) { return this->RemoveCertPathValidationPolicyAssignment(NULL, NULL, ns5__RemoveCertPathValidationPolicyAssignment, ns5__RemoveCertPathValidationPolicyAssignmentResponse); }
	virtual	int RemoveCertPathValidationPolicyAssignment(const char *endpoint, const char *soap_action, _ns5__RemoveCertPathValidationPolicyAssignment *ns5__RemoveCertPathValidationPolicyAssignment, _ns5__RemoveCertPathValidationPolicyAssignmentResponse *ns5__RemoveCertPathValidationPolicyAssignmentResponse);

	/// Web service operation 'ReplaceCertPathValidationPolicyAssignment' (returns error code or SOAP_OK)
	virtual	int ReplaceCertPathValidationPolicyAssignment(_ns5__ReplaceCertPathValidationPolicyAssignment *ns5__ReplaceCertPathValidationPolicyAssignment, _ns5__ReplaceCertPathValidationPolicyAssignmentResponse *ns5__ReplaceCertPathValidationPolicyAssignmentResponse) { return this->ReplaceCertPathValidationPolicyAssignment(NULL, NULL, ns5__ReplaceCertPathValidationPolicyAssignment, ns5__ReplaceCertPathValidationPolicyAssignmentResponse); }
	virtual	int ReplaceCertPathValidationPolicyAssignment(const char *endpoint, const char *soap_action, _ns5__ReplaceCertPathValidationPolicyAssignment *ns5__ReplaceCertPathValidationPolicyAssignment, _ns5__ReplaceCertPathValidationPolicyAssignmentResponse *ns5__ReplaceCertPathValidationPolicyAssignmentResponse);

	/// Web service operation 'GetAssignedCertPathValidationPolicies' (returns error code or SOAP_OK)
	virtual	int GetAssignedCertPathValidationPolicies(_ns5__GetAssignedCertPathValidationPolicies *ns5__GetAssignedCertPathValidationPolicies, _ns5__GetAssignedCertPathValidationPoliciesResponse *ns5__GetAssignedCertPathValidationPoliciesResponse) { return this->GetAssignedCertPathValidationPolicies(NULL, NULL, ns5__GetAssignedCertPathValidationPolicies, ns5__GetAssignedCertPathValidationPoliciesResponse); }
	virtual	int GetAssignedCertPathValidationPolicies(const char *endpoint, const char *soap_action, _ns5__GetAssignedCertPathValidationPolicies *ns5__GetAssignedCertPathValidationPolicies, _ns5__GetAssignedCertPathValidationPoliciesResponse *ns5__GetAssignedCertPathValidationPoliciesResponse);
};
#endif
