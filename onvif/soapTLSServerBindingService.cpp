/* soapTLSServerBindingService.cpp
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapTLSServerBindingService.h"

TLSServerBindingService::TLSServerBindingService()
{	this->soap = soap_new();
	this->own = true;
	TLSServerBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

TLSServerBindingService::TLSServerBindingService(struct soap *_soap)
{	this->soap = _soap;
	this->own = false;
	TLSServerBindingService_init(_soap->imode, _soap->omode);
}

TLSServerBindingService::TLSServerBindingService(soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	TLSServerBindingService_init(iomode, iomode);
}

TLSServerBindingService::TLSServerBindingService(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->own = true;
	TLSServerBindingService_init(imode, omode);
}

TLSServerBindingService::~TLSServerBindingService()
{	if (this->own)
		soap_free(this->soap);
}

void TLSServerBindingService::TLSServerBindingService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
	{"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
	{"xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL},
	{"wsc", "http://schemas.xmlsoap.org/ws/2005/02/sc", NULL, NULL},
	{"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
	{"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
	{"ns2", "http://www.onvif.org/ver10/pacs", NULL, NULL},
	{"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
	{"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
	{"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
	{"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
	{"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
	{"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
	{"name", "http://www.onvif.org/ver10/advancedsecurity/wsdl/AdvancedSecurityServiceBinding", NULL, NULL},
	{"name10", "http://www.onvif.org/ver10/events/wsdl/NotificationProducerBinding", NULL, NULL},
	{"name11", "http://www.onvif.org/ver10/events/wsdl/NotificationConsumerBinding", NULL, NULL},
	{"name12", "http://www.onvif.org/ver10/events/wsdl/PullPointBinding", NULL, NULL},
	{"name13", "http://www.onvif.org/ver10/events/wsdl/CreatePullPointBinding", NULL, NULL},
	{"name14", "http://www.onvif.org/ver10/events/wsdl/PausableSubscriptionManagerBinding", NULL, NULL},
	{"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
	{"name2", "http://www.onvif.org/ver10/advancedsecurity/wsdl/KeystoreBinding", NULL, NULL},
	{"name3", "http://www.onvif.org/ver10/advancedsecurity/wsdl/TLSServerBinding", NULL, NULL},
	{"name4", "http://www.onvif.org/ver10/advancedsecurity/wsdl/Dot1XBinding", NULL, NULL},
	{"ns5", "http://www.onvif.org/ver10/advancedsecurity/wsdl", NULL, NULL},
	{"name5", "http://www.onvif.org/ver20/analytics/wsdl/RuleEngineBinding", NULL, NULL},
	{"name6", "http://www.onvif.org/ver20/analytics/wsdl/AnalyticsEngineBinding", NULL, NULL},
	{"tan", "http://www.onvif.org/ver20/analytics/wsdl", NULL, NULL},
	{"name7", "http://www.onvif.org/ver10/events/wsdl/PullPointSubscriptionBinding", NULL, NULL},
	{"name8", "http://www.onvif.org/ver10/events/wsdl/EventBinding", NULL, NULL},
	{"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
	{"name9", "http://www.onvif.org/ver10/events/wsdl/SubscriptionManagerBinding", NULL, NULL},
	{"ns1", "http://www.onvif.org/ver10/accesscontrol/wsdl", NULL, NULL},
	{"ns10", "http://www.onvif.org/ver10/provisioning/wsdl", NULL, NULL},
	{"ns11", "http://www.onvif.org/ver10/schedule/wsdl", NULL, NULL},
	{"ns12", "http://www.onvif.org/ver10/thermal/wsdl", NULL, NULL},
	{"ns3", "http://www.onvif.org/ver10/accessrules/wsdl", NULL, NULL},
	{"ns4", "http://www.onvif.org/ver10/actionengine/wsdl", NULL, NULL},
	{"ns6", "http://www.onvif.org/ver10/authenticationbehavior/wsdl", NULL, NULL},
	{"ns7", "http://www.onvif.org/ver10/credential/wsdl", NULL, NULL},
	{"ns8", "http://www.onvif.org/ver10/doorcontrol/wsdl", NULL, NULL},
	{"ns9", "http://www.onvif.org/ver20/media/wsdl", NULL, NULL},
	{"tad", "http://www.onvif.org/ver10/analyticsdevice/wsdl", NULL, NULL},
	{"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
	{"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
	{"tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
	{"tmd", "http://www.onvif.org/ver10/deviceIO/wsdl", NULL, NULL},
	{"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
	{"trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL},
	{"trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL},
	{"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
	{"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
	{"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this->soap, namespaces);
}

void TLSServerBindingService::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void TLSServerBindingService::reset()
{	destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	TLSServerBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
TLSServerBindingService *TLSServerBindingService::copy()
{	TLSServerBindingService *dup = SOAP_NEW_COPY(TLSServerBindingService);
	if (dup)
		soap_copy_context(dup->soap, this->soap);
	return dup;
}
#endif

int TLSServerBindingService::soap_close_socket()
{	return soap_closesock(this->soap);
}

int TLSServerBindingService::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

int TLSServerBindingService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this->soap, string, detailXML);
}

int TLSServerBindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

int TLSServerBindingService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this->soap, string, detailXML);
}

int TLSServerBindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

void TLSServerBindingService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void TLSServerBindingService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *TLSServerBindingService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

void TLSServerBindingService::soap_noheader()
{	this->soap->header = NULL;
}

void TLSServerBindingService::soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security)
{	::soap_header(this->soap);
	this->soap->header->wsa5__MessageID = wsa5__MessageID;
	this->soap->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->soap->header->wsa5__From = wsa5__From;
	this->soap->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->soap->header->wsa5__FaultTo = wsa5__FaultTo;
	this->soap->header->wsa5__To = wsa5__To;
	this->soap->header->wsa5__Action = wsa5__Action;
	this->soap->header->chan__ChannelInstance = chan__ChannelInstance;
	this->soap->header->wsse__Security = wsse__Security;
}

const SOAP_ENV__Header *TLSServerBindingService::soap_header()
{	return this->soap->header;
}

int TLSServerBindingService::run(int port)
{	if (soap_valid_socket(this->soap->master) || soap_valid_socket(bind(NULL, port, 100)))
	{	for (;;)
		{	if (!soap_valid_socket(accept()) || serve())
				return this->soap->error;
			soap_destroy(this->soap);
			soap_end(this->soap);
		}
	}
	else
		return this->soap->error;
	return SOAP_OK;
}

SOAP_SOCKET TLSServerBindingService::bind(const char *host, int port, int backlog)
{	return soap_bind(this->soap, host, port, backlog);
}

SOAP_SOCKET TLSServerBindingService::accept()
{	return soap_accept(this->soap);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int TLSServerBindingService::ssl_accept()
{	return soap_ssl_accept(this->soap);
}
#endif

int TLSServerBindingService::serve()
{
#ifndef WITH_FASTCGI
	unsigned int k = this->soap->max_keep_alive;
#endif
	do
	{

#ifndef WITH_FASTCGI
		if (this->soap->max_keep_alive > 0 && !--k)
			this->soap->keep_alive = 0;
#endif

		if (soap_begin_serve(this->soap))
		{	if (this->soap->error >= SOAP_STOP)
				continue;
			return this->soap->error;
		}
		if (dispatch() || (this->soap->fserveloop && this->soap->fserveloop(this->soap)))
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this->soap);
#else
			return soap_send_fault(this->soap);
#endif
		}

#ifdef WITH_FASTCGI
		soap_destroy(this->soap);
		soap_end(this->soap);
	} while (1);
#else
	} while (this->soap->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___name3__AddServerCertificateAssignment(TLSServerBindingService*);
static int serve___name3__RemoveServerCertificateAssignment(TLSServerBindingService*);
static int serve___name3__ReplaceServerCertificateAssignment(TLSServerBindingService*);
static int serve___name3__GetAssignedServerCertificates(TLSServerBindingService*);
static int serve___name3__SetClientAuthenticationRequired(TLSServerBindingService*);
static int serve___name3__GetClientAuthenticationRequired(TLSServerBindingService*);
static int serve___name3__AddCertPathValidationPolicyAssignment(TLSServerBindingService*);
static int serve___name3__RemoveCertPathValidationPolicyAssignment(TLSServerBindingService*);
static int serve___name3__ReplaceCertPathValidationPolicyAssignment(TLSServerBindingService*);
static int serve___name3__GetAssignedCertPathValidationPolicies(TLSServerBindingService*);

int TLSServerBindingService::dispatch()
{	TLSServerBindingService_init(this->soap->imode, this->soap->omode);
	soap_peek_element(this->soap);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:AddServerCertificateAssignment"))
		return serve___name3__AddServerCertificateAssignment(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:RemoveServerCertificateAssignment"))
		return serve___name3__RemoveServerCertificateAssignment(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:ReplaceServerCertificateAssignment"))
		return serve___name3__ReplaceServerCertificateAssignment(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:GetAssignedServerCertificates"))
		return serve___name3__GetAssignedServerCertificates(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:SetClientAuthenticationRequired"))
		return serve___name3__SetClientAuthenticationRequired(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:GetClientAuthenticationRequired"))
		return serve___name3__GetClientAuthenticationRequired(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:AddCertPathValidationPolicyAssignment"))
		return serve___name3__AddCertPathValidationPolicyAssignment(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:RemoveCertPathValidationPolicyAssignment"))
		return serve___name3__RemoveCertPathValidationPolicyAssignment(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:ReplaceCertPathValidationPolicyAssignment"))
		return serve___name3__ReplaceCertPathValidationPolicyAssignment(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns5:GetAssignedCertPathValidationPolicies"))
		return serve___name3__GetAssignedCertPathValidationPolicies(this);
	return this->soap->error = SOAP_NO_METHOD;
}

static int serve___name3__AddServerCertificateAssignment(TLSServerBindingService *service)
{	struct soap *soap = service->soap;
	struct __name3__AddServerCertificateAssignment soap_tmp___name3__AddServerCertificateAssignment;
	_ns5__AddServerCertificateAssignmentResponse ns5__AddServerCertificateAssignmentResponse;
	ns5__AddServerCertificateAssignmentResponse.soap_default(soap);
	soap_default___name3__AddServerCertificateAssignment(soap, &soap_tmp___name3__AddServerCertificateAssignment);
	if (!soap_get___name3__AddServerCertificateAssignment(soap, &soap_tmp___name3__AddServerCertificateAssignment, "-name3:AddServerCertificateAssignment", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->AddServerCertificateAssignment(soap_tmp___name3__AddServerCertificateAssignment.ns5__AddServerCertificateAssignment, &ns5__AddServerCertificateAssignmentResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__AddServerCertificateAssignmentResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__AddServerCertificateAssignmentResponse.soap_put(soap, "ns5:AddServerCertificateAssignmentResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__AddServerCertificateAssignmentResponse.soap_put(soap, "ns5:AddServerCertificateAssignmentResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name3__RemoveServerCertificateAssignment(TLSServerBindingService *service)
{	struct soap *soap = service->soap;
	struct __name3__RemoveServerCertificateAssignment soap_tmp___name3__RemoveServerCertificateAssignment;
	_ns5__RemoveServerCertificateAssignmentResponse ns5__RemoveServerCertificateAssignmentResponse;
	ns5__RemoveServerCertificateAssignmentResponse.soap_default(soap);
	soap_default___name3__RemoveServerCertificateAssignment(soap, &soap_tmp___name3__RemoveServerCertificateAssignment);
	if (!soap_get___name3__RemoveServerCertificateAssignment(soap, &soap_tmp___name3__RemoveServerCertificateAssignment, "-name3:RemoveServerCertificateAssignment", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->RemoveServerCertificateAssignment(soap_tmp___name3__RemoveServerCertificateAssignment.ns5__RemoveServerCertificateAssignment, &ns5__RemoveServerCertificateAssignmentResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__RemoveServerCertificateAssignmentResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__RemoveServerCertificateAssignmentResponse.soap_put(soap, "ns5:RemoveServerCertificateAssignmentResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__RemoveServerCertificateAssignmentResponse.soap_put(soap, "ns5:RemoveServerCertificateAssignmentResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name3__ReplaceServerCertificateAssignment(TLSServerBindingService *service)
{	struct soap *soap = service->soap;
	struct __name3__ReplaceServerCertificateAssignment soap_tmp___name3__ReplaceServerCertificateAssignment;
	_ns5__ReplaceServerCertificateAssignmentResponse ns5__ReplaceServerCertificateAssignmentResponse;
	ns5__ReplaceServerCertificateAssignmentResponse.soap_default(soap);
	soap_default___name3__ReplaceServerCertificateAssignment(soap, &soap_tmp___name3__ReplaceServerCertificateAssignment);
	if (!soap_get___name3__ReplaceServerCertificateAssignment(soap, &soap_tmp___name3__ReplaceServerCertificateAssignment, "-name3:ReplaceServerCertificateAssignment", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->ReplaceServerCertificateAssignment(soap_tmp___name3__ReplaceServerCertificateAssignment.ns5__ReplaceServerCertificateAssignment, &ns5__ReplaceServerCertificateAssignmentResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__ReplaceServerCertificateAssignmentResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__ReplaceServerCertificateAssignmentResponse.soap_put(soap, "ns5:ReplaceServerCertificateAssignmentResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__ReplaceServerCertificateAssignmentResponse.soap_put(soap, "ns5:ReplaceServerCertificateAssignmentResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name3__GetAssignedServerCertificates(TLSServerBindingService *service)
{	struct soap *soap = service->soap;
	struct __name3__GetAssignedServerCertificates soap_tmp___name3__GetAssignedServerCertificates;
	_ns5__GetAssignedServerCertificatesResponse ns5__GetAssignedServerCertificatesResponse;
	ns5__GetAssignedServerCertificatesResponse.soap_default(soap);
	soap_default___name3__GetAssignedServerCertificates(soap, &soap_tmp___name3__GetAssignedServerCertificates);
	if (!soap_get___name3__GetAssignedServerCertificates(soap, &soap_tmp___name3__GetAssignedServerCertificates, "-name3:GetAssignedServerCertificates", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetAssignedServerCertificates(soap_tmp___name3__GetAssignedServerCertificates.ns5__GetAssignedServerCertificates, &ns5__GetAssignedServerCertificatesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__GetAssignedServerCertificatesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__GetAssignedServerCertificatesResponse.soap_put(soap, "ns5:GetAssignedServerCertificatesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__GetAssignedServerCertificatesResponse.soap_put(soap, "ns5:GetAssignedServerCertificatesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name3__SetClientAuthenticationRequired(TLSServerBindingService *service)
{	struct soap *soap = service->soap;
	struct __name3__SetClientAuthenticationRequired soap_tmp___name3__SetClientAuthenticationRequired;
	_ns5__SetClientAuthenticationRequiredResponse ns5__SetClientAuthenticationRequiredResponse;
	ns5__SetClientAuthenticationRequiredResponse.soap_default(soap);
	soap_default___name3__SetClientAuthenticationRequired(soap, &soap_tmp___name3__SetClientAuthenticationRequired);
	if (!soap_get___name3__SetClientAuthenticationRequired(soap, &soap_tmp___name3__SetClientAuthenticationRequired, "-name3:SetClientAuthenticationRequired", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->SetClientAuthenticationRequired(soap_tmp___name3__SetClientAuthenticationRequired.ns5__SetClientAuthenticationRequired, &ns5__SetClientAuthenticationRequiredResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__SetClientAuthenticationRequiredResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__SetClientAuthenticationRequiredResponse.soap_put(soap, "ns5:SetClientAuthenticationRequiredResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__SetClientAuthenticationRequiredResponse.soap_put(soap, "ns5:SetClientAuthenticationRequiredResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name3__GetClientAuthenticationRequired(TLSServerBindingService *service)
{	struct soap *soap = service->soap;
	struct __name3__GetClientAuthenticationRequired soap_tmp___name3__GetClientAuthenticationRequired;
	_ns5__GetClientAuthenticationRequiredResponse ns5__GetClientAuthenticationRequiredResponse;
	ns5__GetClientAuthenticationRequiredResponse.soap_default(soap);
	soap_default___name3__GetClientAuthenticationRequired(soap, &soap_tmp___name3__GetClientAuthenticationRequired);
	if (!soap_get___name3__GetClientAuthenticationRequired(soap, &soap_tmp___name3__GetClientAuthenticationRequired, "-name3:GetClientAuthenticationRequired", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetClientAuthenticationRequired(soap_tmp___name3__GetClientAuthenticationRequired.ns5__GetClientAuthenticationRequired, &ns5__GetClientAuthenticationRequiredResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__GetClientAuthenticationRequiredResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__GetClientAuthenticationRequiredResponse.soap_put(soap, "ns5:GetClientAuthenticationRequiredResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__GetClientAuthenticationRequiredResponse.soap_put(soap, "ns5:GetClientAuthenticationRequiredResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name3__AddCertPathValidationPolicyAssignment(TLSServerBindingService *service)
{	struct soap *soap = service->soap;
	struct __name3__AddCertPathValidationPolicyAssignment soap_tmp___name3__AddCertPathValidationPolicyAssignment;
	_ns5__AddCertPathValidationPolicyAssignmentResponse ns5__AddCertPathValidationPolicyAssignmentResponse;
	ns5__AddCertPathValidationPolicyAssignmentResponse.soap_default(soap);
	soap_default___name3__AddCertPathValidationPolicyAssignment(soap, &soap_tmp___name3__AddCertPathValidationPolicyAssignment);
	if (!soap_get___name3__AddCertPathValidationPolicyAssignment(soap, &soap_tmp___name3__AddCertPathValidationPolicyAssignment, "-name3:AddCertPathValidationPolicyAssignment", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->AddCertPathValidationPolicyAssignment(soap_tmp___name3__AddCertPathValidationPolicyAssignment.ns5__AddCertPathValidationPolicyAssignment, &ns5__AddCertPathValidationPolicyAssignmentResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__AddCertPathValidationPolicyAssignmentResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__AddCertPathValidationPolicyAssignmentResponse.soap_put(soap, "ns5:AddCertPathValidationPolicyAssignmentResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__AddCertPathValidationPolicyAssignmentResponse.soap_put(soap, "ns5:AddCertPathValidationPolicyAssignmentResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name3__RemoveCertPathValidationPolicyAssignment(TLSServerBindingService *service)
{	struct soap *soap = service->soap;
	struct __name3__RemoveCertPathValidationPolicyAssignment soap_tmp___name3__RemoveCertPathValidationPolicyAssignment;
	_ns5__RemoveCertPathValidationPolicyAssignmentResponse ns5__RemoveCertPathValidationPolicyAssignmentResponse;
	ns5__RemoveCertPathValidationPolicyAssignmentResponse.soap_default(soap);
	soap_default___name3__RemoveCertPathValidationPolicyAssignment(soap, &soap_tmp___name3__RemoveCertPathValidationPolicyAssignment);
	if (!soap_get___name3__RemoveCertPathValidationPolicyAssignment(soap, &soap_tmp___name3__RemoveCertPathValidationPolicyAssignment, "-name3:RemoveCertPathValidationPolicyAssignment", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->RemoveCertPathValidationPolicyAssignment(soap_tmp___name3__RemoveCertPathValidationPolicyAssignment.ns5__RemoveCertPathValidationPolicyAssignment, &ns5__RemoveCertPathValidationPolicyAssignmentResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__RemoveCertPathValidationPolicyAssignmentResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__RemoveCertPathValidationPolicyAssignmentResponse.soap_put(soap, "ns5:RemoveCertPathValidationPolicyAssignmentResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__RemoveCertPathValidationPolicyAssignmentResponse.soap_put(soap, "ns5:RemoveCertPathValidationPolicyAssignmentResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name3__ReplaceCertPathValidationPolicyAssignment(TLSServerBindingService *service)
{	struct soap *soap = service->soap;
	struct __name3__ReplaceCertPathValidationPolicyAssignment soap_tmp___name3__ReplaceCertPathValidationPolicyAssignment;
	_ns5__ReplaceCertPathValidationPolicyAssignmentResponse ns5__ReplaceCertPathValidationPolicyAssignmentResponse;
	ns5__ReplaceCertPathValidationPolicyAssignmentResponse.soap_default(soap);
	soap_default___name3__ReplaceCertPathValidationPolicyAssignment(soap, &soap_tmp___name3__ReplaceCertPathValidationPolicyAssignment);
	if (!soap_get___name3__ReplaceCertPathValidationPolicyAssignment(soap, &soap_tmp___name3__ReplaceCertPathValidationPolicyAssignment, "-name3:ReplaceCertPathValidationPolicyAssignment", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->ReplaceCertPathValidationPolicyAssignment(soap_tmp___name3__ReplaceCertPathValidationPolicyAssignment.ns5__ReplaceCertPathValidationPolicyAssignment, &ns5__ReplaceCertPathValidationPolicyAssignmentResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__ReplaceCertPathValidationPolicyAssignmentResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__ReplaceCertPathValidationPolicyAssignmentResponse.soap_put(soap, "ns5:ReplaceCertPathValidationPolicyAssignmentResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__ReplaceCertPathValidationPolicyAssignmentResponse.soap_put(soap, "ns5:ReplaceCertPathValidationPolicyAssignmentResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___name3__GetAssignedCertPathValidationPolicies(TLSServerBindingService *service)
{	struct soap *soap = service->soap;
	struct __name3__GetAssignedCertPathValidationPolicies soap_tmp___name3__GetAssignedCertPathValidationPolicies;
	_ns5__GetAssignedCertPathValidationPoliciesResponse ns5__GetAssignedCertPathValidationPoliciesResponse;
	ns5__GetAssignedCertPathValidationPoliciesResponse.soap_default(soap);
	soap_default___name3__GetAssignedCertPathValidationPolicies(soap, &soap_tmp___name3__GetAssignedCertPathValidationPolicies);
	if (!soap_get___name3__GetAssignedCertPathValidationPolicies(soap, &soap_tmp___name3__GetAssignedCertPathValidationPolicies, "-name3:GetAssignedCertPathValidationPolicies", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetAssignedCertPathValidationPolicies(soap_tmp___name3__GetAssignedCertPathValidationPolicies.ns5__GetAssignedCertPathValidationPolicies, &ns5__GetAssignedCertPathValidationPoliciesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns5__GetAssignedCertPathValidationPoliciesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns5__GetAssignedCertPathValidationPoliciesResponse.soap_put(soap, "ns5:GetAssignedCertPathValidationPoliciesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns5__GetAssignedCertPathValidationPoliciesResponse.soap_put(soap, "ns5:GetAssignedCertPathValidationPoliciesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */