/* soapActionEngineBindingProxy.cpp
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapActionEngineBindingProxy.h"

ActionEngineBindingProxy::ActionEngineBindingProxy()
{	this->soap = soap_new();
	this->own = true;
	ActionEngineBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

ActionEngineBindingProxy::ActionEngineBindingProxy(struct soap *_soap)
{	this->soap = _soap;
	this->own = false;
	ActionEngineBindingProxy_init(_soap->imode, _soap->omode);
}

ActionEngineBindingProxy::ActionEngineBindingProxy(const char *url)
{	this->soap = soap_new();
	this->own = true;
	ActionEngineBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

ActionEngineBindingProxy::ActionEngineBindingProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	ActionEngineBindingProxy_init(iomode, iomode);
}

ActionEngineBindingProxy::ActionEngineBindingProxy(const char *url, soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	ActionEngineBindingProxy_init(iomode, iomode);
	soap_endpoint = url;
}

ActionEngineBindingProxy::ActionEngineBindingProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->own = true;
	ActionEngineBindingProxy_init(imode, omode);
}

ActionEngineBindingProxy::~ActionEngineBindingProxy()
{	if (this->own)
		soap_free(this->soap);
}

void ActionEngineBindingProxy::ActionEngineBindingProxy_init(soap_mode imode, soap_mode omode)
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

void ActionEngineBindingProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void ActionEngineBindingProxy::reset()
{	destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	ActionEngineBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void ActionEngineBindingProxy::soap_noheader()
{	this->soap->header = NULL;
}

void ActionEngineBindingProxy::soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security)
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

const SOAP_ENV__Header *ActionEngineBindingProxy::soap_header()
{	return this->soap->header;
}

const SOAP_ENV__Fault *ActionEngineBindingProxy::soap_fault()
{	return this->soap->fault;
}

const char *ActionEngineBindingProxy::soap_fault_string()
{	return *soap_faultstring(this->soap);
}

const char *ActionEngineBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this->soap);
}

int ActionEngineBindingProxy::soap_close_socket()
{	return soap_closesock(this->soap);
}

int ActionEngineBindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

void ActionEngineBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void ActionEngineBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *ActionEngineBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int ActionEngineBindingProxy::GetSupportedActions(const char *endpoint, const char *soap_action, _ns4__GetSupportedActions *ns4__GetSupportedActions, _ns4__GetSupportedActionsResponse *ns4__GetSupportedActionsResponse)
{	struct soap *soap = this->soap;
	struct __ns4__GetSupportedActions soap_tmp___ns4__GetSupportedActions;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/actionengine/wsdl/GetSupportedActions";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns4__GetSupportedActions.ns4__GetSupportedActions = ns4__GetSupportedActions;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns4__GetSupportedActions(soap, &soap_tmp___ns4__GetSupportedActions);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__GetSupportedActions(soap, &soap_tmp___ns4__GetSupportedActions, "-ns4:GetSupportedActions", NULL)
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
	 || soap_put___ns4__GetSupportedActions(soap, &soap_tmp___ns4__GetSupportedActions, "-ns4:GetSupportedActions", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__GetSupportedActionsResponse)
		return soap_closesock(soap);
	ns4__GetSupportedActionsResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__GetSupportedActionsResponse->soap_get(soap, "ns4:GetSupportedActionsResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ActionEngineBindingProxy::GetActions(const char *endpoint, const char *soap_action, _ns4__GetActions *ns4__GetActions, _ns4__GetActionsResponse *ns4__GetActionsResponse)
{	struct soap *soap = this->soap;
	struct __ns4__GetActions soap_tmp___ns4__GetActions;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/actionengine/wsdl/GetActions";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns4__GetActions.ns4__GetActions = ns4__GetActions;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns4__GetActions(soap, &soap_tmp___ns4__GetActions);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__GetActions(soap, &soap_tmp___ns4__GetActions, "-ns4:GetActions", NULL)
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
	 || soap_put___ns4__GetActions(soap, &soap_tmp___ns4__GetActions, "-ns4:GetActions", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__GetActionsResponse)
		return soap_closesock(soap);
	ns4__GetActionsResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__GetActionsResponse->soap_get(soap, "ns4:GetActionsResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ActionEngineBindingProxy::CreateActions(const char *endpoint, const char *soap_action, _ns4__CreateActions *ns4__CreateActions, _ns4__CreateActionsResponse *ns4__CreateActionsResponse)
{	struct soap *soap = this->soap;
	struct __ns4__CreateActions soap_tmp___ns4__CreateActions;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/actionengine/wsdl/CreateActions";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns4__CreateActions.ns4__CreateActions = ns4__CreateActions;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns4__CreateActions(soap, &soap_tmp___ns4__CreateActions);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__CreateActions(soap, &soap_tmp___ns4__CreateActions, "-ns4:CreateActions", NULL)
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
	 || soap_put___ns4__CreateActions(soap, &soap_tmp___ns4__CreateActions, "-ns4:CreateActions", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__CreateActionsResponse)
		return soap_closesock(soap);
	ns4__CreateActionsResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__CreateActionsResponse->soap_get(soap, "ns4:CreateActionsResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ActionEngineBindingProxy::DeleteActions(const char *endpoint, const char *soap_action, _ns4__DeleteActions *ns4__DeleteActions, _ns4__DeleteActionsResponse *ns4__DeleteActionsResponse)
{	struct soap *soap = this->soap;
	struct __ns4__DeleteActions soap_tmp___ns4__DeleteActions;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/actionengine/wsdl/DeleteActions";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns4__DeleteActions.ns4__DeleteActions = ns4__DeleteActions;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns4__DeleteActions(soap, &soap_tmp___ns4__DeleteActions);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__DeleteActions(soap, &soap_tmp___ns4__DeleteActions, "-ns4:DeleteActions", NULL)
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
	 || soap_put___ns4__DeleteActions(soap, &soap_tmp___ns4__DeleteActions, "-ns4:DeleteActions", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__DeleteActionsResponse)
		return soap_closesock(soap);
	ns4__DeleteActionsResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__DeleteActionsResponse->soap_get(soap, "ns4:DeleteActionsResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ActionEngineBindingProxy::ModifyActions(const char *endpoint, const char *soap_action, _ns4__ModifyActions *ns4__ModifyActions, _ns4__ModifyActionsResponse *ns4__ModifyActionsResponse)
{	struct soap *soap = this->soap;
	struct __ns4__ModifyActions soap_tmp___ns4__ModifyActions;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/actionengine/wsdl/ModifyActions";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns4__ModifyActions.ns4__ModifyActions = ns4__ModifyActions;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns4__ModifyActions(soap, &soap_tmp___ns4__ModifyActions);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__ModifyActions(soap, &soap_tmp___ns4__ModifyActions, "-ns4:ModifyActions", NULL)
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
	 || soap_put___ns4__ModifyActions(soap, &soap_tmp___ns4__ModifyActions, "-ns4:ModifyActions", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__ModifyActionsResponse)
		return soap_closesock(soap);
	ns4__ModifyActionsResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__ModifyActionsResponse->soap_get(soap, "ns4:ModifyActionsResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ActionEngineBindingProxy::GetServiceCapabilities(const char *endpoint, const char *soap_action, _ns4__GetServiceCapabilities *ns4__GetServiceCapabilities, _ns4__GetServiceCapabilitiesResponse *ns4__GetServiceCapabilitiesResponse)
{	struct soap *soap = this->soap;
	struct __ns4__GetServiceCapabilities soap_tmp___ns4__GetServiceCapabilities;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/actionengine/wsdl/GetServiceCapabilities";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns4__GetServiceCapabilities.ns4__GetServiceCapabilities = ns4__GetServiceCapabilities;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns4__GetServiceCapabilities(soap, &soap_tmp___ns4__GetServiceCapabilities);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__GetServiceCapabilities(soap, &soap_tmp___ns4__GetServiceCapabilities, "-ns4:GetServiceCapabilities", NULL)
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
	 || soap_put___ns4__GetServiceCapabilities(soap, &soap_tmp___ns4__GetServiceCapabilities, "-ns4:GetServiceCapabilities", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__GetServiceCapabilitiesResponse)
		return soap_closesock(soap);
	ns4__GetServiceCapabilitiesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__GetServiceCapabilitiesResponse->soap_get(soap, "ns4:GetServiceCapabilitiesResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ActionEngineBindingProxy::GetActionTriggers(const char *endpoint, const char *soap_action, _ns4__GetActionTriggers *ns4__GetActionTriggers, _ns4__GetActionTriggersResponse *ns4__GetActionTriggersResponse)
{	struct soap *soap = this->soap;
	struct __ns4__GetActionTriggers soap_tmp___ns4__GetActionTriggers;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/actionengine/wsdl/GetActionTriggers";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns4__GetActionTriggers.ns4__GetActionTriggers = ns4__GetActionTriggers;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns4__GetActionTriggers(soap, &soap_tmp___ns4__GetActionTriggers);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__GetActionTriggers(soap, &soap_tmp___ns4__GetActionTriggers, "-ns4:GetActionTriggers", NULL)
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
	 || soap_put___ns4__GetActionTriggers(soap, &soap_tmp___ns4__GetActionTriggers, "-ns4:GetActionTriggers", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__GetActionTriggersResponse)
		return soap_closesock(soap);
	ns4__GetActionTriggersResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__GetActionTriggersResponse->soap_get(soap, "ns4:GetActionTriggersResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ActionEngineBindingProxy::CreateActionTriggers(const char *endpoint, const char *soap_action, _ns4__CreateActionTriggers *ns4__CreateActionTriggers, _ns4__CreateActionTriggersResponse *ns4__CreateActionTriggersResponse)
{	struct soap *soap = this->soap;
	struct __ns4__CreateActionTriggers soap_tmp___ns4__CreateActionTriggers;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/actionengine/wsdl/CreateActionTriggers";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns4__CreateActionTriggers.ns4__CreateActionTriggers = ns4__CreateActionTriggers;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns4__CreateActionTriggers(soap, &soap_tmp___ns4__CreateActionTriggers);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__CreateActionTriggers(soap, &soap_tmp___ns4__CreateActionTriggers, "-ns4:CreateActionTriggers", NULL)
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
	 || soap_put___ns4__CreateActionTriggers(soap, &soap_tmp___ns4__CreateActionTriggers, "-ns4:CreateActionTriggers", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__CreateActionTriggersResponse)
		return soap_closesock(soap);
	ns4__CreateActionTriggersResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__CreateActionTriggersResponse->soap_get(soap, "ns4:CreateActionTriggersResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ActionEngineBindingProxy::DeleteActionTriggers(const char *endpoint, const char *soap_action, _ns4__DeleteActionTriggers *ns4__DeleteActionTriggers, _ns4__DeleteActionTriggersResponse *ns4__DeleteActionTriggersResponse)
{	struct soap *soap = this->soap;
	struct __ns4__DeleteActionTriggers soap_tmp___ns4__DeleteActionTriggers;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/actionengine/wsdl/DeleteActionTriggers";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns4__DeleteActionTriggers.ns4__DeleteActionTriggers = ns4__DeleteActionTriggers;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns4__DeleteActionTriggers(soap, &soap_tmp___ns4__DeleteActionTriggers);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__DeleteActionTriggers(soap, &soap_tmp___ns4__DeleteActionTriggers, "-ns4:DeleteActionTriggers", NULL)
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
	 || soap_put___ns4__DeleteActionTriggers(soap, &soap_tmp___ns4__DeleteActionTriggers, "-ns4:DeleteActionTriggers", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__DeleteActionTriggersResponse)
		return soap_closesock(soap);
	ns4__DeleteActionTriggersResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__DeleteActionTriggersResponse->soap_get(soap, "ns4:DeleteActionTriggersResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ActionEngineBindingProxy::ModifyActionTriggers(const char *endpoint, const char *soap_action, _ns4__ModifyActionTriggers *ns4__ModifyActionTriggers, _ns4__ModifyActionTriggersResponse *ns4__ModifyActionTriggersResponse)
{	struct soap *soap = this->soap;
	struct __ns4__ModifyActionTriggers soap_tmp___ns4__ModifyActionTriggers;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/actionengine/wsdl/ModifyActionTriggers";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___ns4__ModifyActionTriggers.ns4__ModifyActionTriggers = ns4__ModifyActionTriggers;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns4__ModifyActionTriggers(soap, &soap_tmp___ns4__ModifyActionTriggers);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__ModifyActionTriggers(soap, &soap_tmp___ns4__ModifyActionTriggers, "-ns4:ModifyActionTriggers", NULL)
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
	 || soap_put___ns4__ModifyActionTriggers(soap, &soap_tmp___ns4__ModifyActionTriggers, "-ns4:ModifyActionTriggers", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__ModifyActionTriggersResponse)
		return soap_closesock(soap);
	ns4__ModifyActionTriggersResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__ModifyActionTriggersResponse->soap_get(soap, "ns4:ModifyActionTriggersResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
