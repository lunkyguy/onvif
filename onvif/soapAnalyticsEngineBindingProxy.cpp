/* soapAnalyticsEngineBindingProxy.cpp
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapAnalyticsEngineBindingProxy.h"

AnalyticsEngineBindingProxy::AnalyticsEngineBindingProxy()
{	this->soap = soap_new();
	this->own = true;
	AnalyticsEngineBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

AnalyticsEngineBindingProxy::AnalyticsEngineBindingProxy(struct soap *_soap)
{	this->soap = _soap;
	this->own = false;
	AnalyticsEngineBindingProxy_init(_soap->imode, _soap->omode);
}

AnalyticsEngineBindingProxy::AnalyticsEngineBindingProxy(const char *url)
{	this->soap = soap_new();
	this->own = true;
	AnalyticsEngineBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

AnalyticsEngineBindingProxy::AnalyticsEngineBindingProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	AnalyticsEngineBindingProxy_init(iomode, iomode);
}

AnalyticsEngineBindingProxy::AnalyticsEngineBindingProxy(const char *url, soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	AnalyticsEngineBindingProxy_init(iomode, iomode);
	soap_endpoint = url;
}

AnalyticsEngineBindingProxy::AnalyticsEngineBindingProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->own = true;
	AnalyticsEngineBindingProxy_init(imode, omode);
}

AnalyticsEngineBindingProxy::~AnalyticsEngineBindingProxy()
{	if (this->own)
		soap_free(this->soap);
}

void AnalyticsEngineBindingProxy::AnalyticsEngineBindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
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

void AnalyticsEngineBindingProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void AnalyticsEngineBindingProxy::reset()
{	destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	AnalyticsEngineBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void AnalyticsEngineBindingProxy::soap_noheader()
{	this->soap->header = NULL;
}

void AnalyticsEngineBindingProxy::soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security)
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

const SOAP_ENV__Header *AnalyticsEngineBindingProxy::soap_header()
{	return this->soap->header;
}

const SOAP_ENV__Fault *AnalyticsEngineBindingProxy::soap_fault()
{	return this->soap->fault;
}

const char *AnalyticsEngineBindingProxy::soap_fault_string()
{	return *soap_faultstring(this->soap);
}

const char *AnalyticsEngineBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this->soap);
}

int AnalyticsEngineBindingProxy::soap_close_socket()
{	return soap_closesock(this->soap);
}

int AnalyticsEngineBindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

void AnalyticsEngineBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void AnalyticsEngineBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *AnalyticsEngineBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int AnalyticsEngineBindingProxy::GetServiceCapabilities(const char *endpoint, const char *soap_action, _tan__GetServiceCapabilities *tan__GetServiceCapabilities, _tan__GetServiceCapabilitiesResponse *tan__GetServiceCapabilitiesResponse)
{	struct soap *soap = this->soap;
	struct __name6__GetServiceCapabilities soap_tmp___name6__GetServiceCapabilities;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/GetServiceCapabilities";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___name6__GetServiceCapabilities.tan__GetServiceCapabilities = tan__GetServiceCapabilities;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___name6__GetServiceCapabilities(soap, &soap_tmp___name6__GetServiceCapabilities);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___name6__GetServiceCapabilities(soap, &soap_tmp___name6__GetServiceCapabilities, "-name6:GetServiceCapabilities", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___name6__GetServiceCapabilities(soap, &soap_tmp___name6__GetServiceCapabilities, "-name6:GetServiceCapabilities", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tan__GetServiceCapabilitiesResponse)
		return soap_closesock(soap);
	tan__GetServiceCapabilitiesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tan__GetServiceCapabilitiesResponse->soap_get(soap, "tan:GetServiceCapabilitiesResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int AnalyticsEngineBindingProxy::GetSupportedAnalyticsModules(const char *endpoint, const char *soap_action, _tan__GetSupportedAnalyticsModules *tan__GetSupportedAnalyticsModules, _tan__GetSupportedAnalyticsModulesResponse *tan__GetSupportedAnalyticsModulesResponse)
{	struct soap *soap = this->soap;
	struct __name6__GetSupportedAnalyticsModules soap_tmp___name6__GetSupportedAnalyticsModules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/GetSupportedAnalyticsModules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___name6__GetSupportedAnalyticsModules.tan__GetSupportedAnalyticsModules = tan__GetSupportedAnalyticsModules;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___name6__GetSupportedAnalyticsModules(soap, &soap_tmp___name6__GetSupportedAnalyticsModules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___name6__GetSupportedAnalyticsModules(soap, &soap_tmp___name6__GetSupportedAnalyticsModules, "-name6:GetSupportedAnalyticsModules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___name6__GetSupportedAnalyticsModules(soap, &soap_tmp___name6__GetSupportedAnalyticsModules, "-name6:GetSupportedAnalyticsModules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tan__GetSupportedAnalyticsModulesResponse)
		return soap_closesock(soap);
	tan__GetSupportedAnalyticsModulesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tan__GetSupportedAnalyticsModulesResponse->soap_get(soap, "tan:GetSupportedAnalyticsModulesResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int AnalyticsEngineBindingProxy::CreateAnalyticsModules(const char *endpoint, const char *soap_action, _tan__CreateAnalyticsModules *tan__CreateAnalyticsModules, _tan__CreateAnalyticsModulesResponse *tan__CreateAnalyticsModulesResponse)
{	struct soap *soap = this->soap;
	struct __name6__CreateAnalyticsModules soap_tmp___name6__CreateAnalyticsModules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/CreateAnalyticsModules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___name6__CreateAnalyticsModules.tan__CreateAnalyticsModules = tan__CreateAnalyticsModules;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___name6__CreateAnalyticsModules(soap, &soap_tmp___name6__CreateAnalyticsModules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___name6__CreateAnalyticsModules(soap, &soap_tmp___name6__CreateAnalyticsModules, "-name6:CreateAnalyticsModules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___name6__CreateAnalyticsModules(soap, &soap_tmp___name6__CreateAnalyticsModules, "-name6:CreateAnalyticsModules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tan__CreateAnalyticsModulesResponse)
		return soap_closesock(soap);
	tan__CreateAnalyticsModulesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tan__CreateAnalyticsModulesResponse->soap_get(soap, "tan:CreateAnalyticsModulesResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int AnalyticsEngineBindingProxy::DeleteAnalyticsModules(const char *endpoint, const char *soap_action, _tan__DeleteAnalyticsModules *tan__DeleteAnalyticsModules, _tan__DeleteAnalyticsModulesResponse *tan__DeleteAnalyticsModulesResponse)
{	struct soap *soap = this->soap;
	struct __name6__DeleteAnalyticsModules soap_tmp___name6__DeleteAnalyticsModules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/DeleteAnalyticsModules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___name6__DeleteAnalyticsModules.tan__DeleteAnalyticsModules = tan__DeleteAnalyticsModules;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___name6__DeleteAnalyticsModules(soap, &soap_tmp___name6__DeleteAnalyticsModules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___name6__DeleteAnalyticsModules(soap, &soap_tmp___name6__DeleteAnalyticsModules, "-name6:DeleteAnalyticsModules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___name6__DeleteAnalyticsModules(soap, &soap_tmp___name6__DeleteAnalyticsModules, "-name6:DeleteAnalyticsModules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tan__DeleteAnalyticsModulesResponse)
		return soap_closesock(soap);
	tan__DeleteAnalyticsModulesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tan__DeleteAnalyticsModulesResponse->soap_get(soap, "tan:DeleteAnalyticsModulesResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int AnalyticsEngineBindingProxy::GetAnalyticsModules(const char *endpoint, const char *soap_action, _tan__GetAnalyticsModules *tan__GetAnalyticsModules, _tan__GetAnalyticsModulesResponse *tan__GetAnalyticsModulesResponse)
{	struct soap *soap = this->soap;
	struct __name6__GetAnalyticsModules soap_tmp___name6__GetAnalyticsModules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/GetAnalyticsModules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___name6__GetAnalyticsModules.tan__GetAnalyticsModules = tan__GetAnalyticsModules;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___name6__GetAnalyticsModules(soap, &soap_tmp___name6__GetAnalyticsModules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___name6__GetAnalyticsModules(soap, &soap_tmp___name6__GetAnalyticsModules, "-name6:GetAnalyticsModules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___name6__GetAnalyticsModules(soap, &soap_tmp___name6__GetAnalyticsModules, "-name6:GetAnalyticsModules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tan__GetAnalyticsModulesResponse)
		return soap_closesock(soap);
	tan__GetAnalyticsModulesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tan__GetAnalyticsModulesResponse->soap_get(soap, "tan:GetAnalyticsModulesResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int AnalyticsEngineBindingProxy::GetAnalyticsModuleOptions(const char *endpoint, const char *soap_action, _tan__GetAnalyticsModuleOptions *tan__GetAnalyticsModuleOptions, _tan__GetAnalyticsModuleOptionsResponse *tan__GetAnalyticsModuleOptionsResponse)
{	struct soap *soap = this->soap;
	struct __name6__GetAnalyticsModuleOptions soap_tmp___name6__GetAnalyticsModuleOptions;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/GetAnalyticsModuleOptions";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___name6__GetAnalyticsModuleOptions.tan__GetAnalyticsModuleOptions = tan__GetAnalyticsModuleOptions;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___name6__GetAnalyticsModuleOptions(soap, &soap_tmp___name6__GetAnalyticsModuleOptions);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___name6__GetAnalyticsModuleOptions(soap, &soap_tmp___name6__GetAnalyticsModuleOptions, "-name6:GetAnalyticsModuleOptions", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___name6__GetAnalyticsModuleOptions(soap, &soap_tmp___name6__GetAnalyticsModuleOptions, "-name6:GetAnalyticsModuleOptions", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tan__GetAnalyticsModuleOptionsResponse)
		return soap_closesock(soap);
	tan__GetAnalyticsModuleOptionsResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tan__GetAnalyticsModuleOptionsResponse->soap_get(soap, "tan:GetAnalyticsModuleOptionsResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int AnalyticsEngineBindingProxy::ModifyAnalyticsModules(const char *endpoint, const char *soap_action, _tan__ModifyAnalyticsModules *tan__ModifyAnalyticsModules, _tan__ModifyAnalyticsModulesResponse *tan__ModifyAnalyticsModulesResponse)
{	struct soap *soap = this->soap;
	struct __name6__ModifyAnalyticsModules soap_tmp___name6__ModifyAnalyticsModules;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver20/analytics/wsdl/ModifyAnalyticsModules";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___name6__ModifyAnalyticsModules.tan__ModifyAnalyticsModules = tan__ModifyAnalyticsModules;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___name6__ModifyAnalyticsModules(soap, &soap_tmp___name6__ModifyAnalyticsModules);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___name6__ModifyAnalyticsModules(soap, &soap_tmp___name6__ModifyAnalyticsModules, "-name6:ModifyAnalyticsModules", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___name6__ModifyAnalyticsModules(soap, &soap_tmp___name6__ModifyAnalyticsModules, "-name6:ModifyAnalyticsModules", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tan__ModifyAnalyticsModulesResponse)
		return soap_closesock(soap);
	tan__ModifyAnalyticsModulesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tan__ModifyAnalyticsModulesResponse->soap_get(soap, "tan:ModifyAnalyticsModulesResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
