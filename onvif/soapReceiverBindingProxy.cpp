/* soapReceiverBindingProxy.cpp
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapReceiverBindingProxy.h"

ReceiverBindingProxy::ReceiverBindingProxy()
{	this->soap = soap_new();
	this->own = true;
	ReceiverBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

ReceiverBindingProxy::ReceiverBindingProxy(struct soap *_soap)
{	this->soap = _soap;
	this->own = false;
	ReceiverBindingProxy_init(_soap->imode, _soap->omode);
}

ReceiverBindingProxy::ReceiverBindingProxy(const char *url)
{	this->soap = soap_new();
	this->own = true;
	ReceiverBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

ReceiverBindingProxy::ReceiverBindingProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	ReceiverBindingProxy_init(iomode, iomode);
}

ReceiverBindingProxy::ReceiverBindingProxy(const char *url, soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	ReceiverBindingProxy_init(iomode, iomode);
	soap_endpoint = url;
}

ReceiverBindingProxy::ReceiverBindingProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->own = true;
	ReceiverBindingProxy_init(imode, omode);
}

ReceiverBindingProxy::~ReceiverBindingProxy()
{	if (this->own)
		soap_free(this->soap);
}

void ReceiverBindingProxy::ReceiverBindingProxy_init(soap_mode imode, soap_mode omode)
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

void ReceiverBindingProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void ReceiverBindingProxy::reset()
{	destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	ReceiverBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void ReceiverBindingProxy::soap_noheader()
{	this->soap->header = NULL;
}

void ReceiverBindingProxy::soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security)
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

const SOAP_ENV__Header *ReceiverBindingProxy::soap_header()
{	return this->soap->header;
}

const SOAP_ENV__Fault *ReceiverBindingProxy::soap_fault()
{	return this->soap->fault;
}

const char *ReceiverBindingProxy::soap_fault_string()
{	return *soap_faultstring(this->soap);
}

const char *ReceiverBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this->soap);
}

int ReceiverBindingProxy::soap_close_socket()
{	return soap_closesock(this->soap);
}

int ReceiverBindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

void ReceiverBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void ReceiverBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *ReceiverBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int ReceiverBindingProxy::GetServiceCapabilities(const char *endpoint, const char *soap_action, _trv__GetServiceCapabilities *trv__GetServiceCapabilities, _trv__GetServiceCapabilitiesResponse *trv__GetServiceCapabilitiesResponse)
{	struct soap *soap = this->soap;
	struct __trv__GetServiceCapabilities soap_tmp___trv__GetServiceCapabilities;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/GetServiceCapabilities";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___trv__GetServiceCapabilities.trv__GetServiceCapabilities = trv__GetServiceCapabilities;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___trv__GetServiceCapabilities(soap, &soap_tmp___trv__GetServiceCapabilities);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__GetServiceCapabilities(soap, &soap_tmp___trv__GetServiceCapabilities, "-trv:GetServiceCapabilities", NULL)
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
	 || soap_put___trv__GetServiceCapabilities(soap, &soap_tmp___trv__GetServiceCapabilities, "-trv:GetServiceCapabilities", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!trv__GetServiceCapabilitiesResponse)
		return soap_closesock(soap);
	trv__GetServiceCapabilitiesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__GetServiceCapabilitiesResponse->soap_get(soap, "trv:GetServiceCapabilitiesResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::GetReceivers(const char *endpoint, const char *soap_action, _trv__GetReceivers *trv__GetReceivers, _trv__GetReceiversResponse *trv__GetReceiversResponse)
{	struct soap *soap = this->soap;
	struct __trv__GetReceivers soap_tmp___trv__GetReceivers;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/GetReceivers";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___trv__GetReceivers.trv__GetReceivers = trv__GetReceivers;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___trv__GetReceivers(soap, &soap_tmp___trv__GetReceivers);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__GetReceivers(soap, &soap_tmp___trv__GetReceivers, "-trv:GetReceivers", NULL)
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
	 || soap_put___trv__GetReceivers(soap, &soap_tmp___trv__GetReceivers, "-trv:GetReceivers", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!trv__GetReceiversResponse)
		return soap_closesock(soap);
	trv__GetReceiversResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__GetReceiversResponse->soap_get(soap, "trv:GetReceiversResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::GetReceiver(const char *endpoint, const char *soap_action, _trv__GetReceiver *trv__GetReceiver, _trv__GetReceiverResponse *trv__GetReceiverResponse)
{	struct soap *soap = this->soap;
	struct __trv__GetReceiver soap_tmp___trv__GetReceiver;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/GetReceiver";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___trv__GetReceiver.trv__GetReceiver = trv__GetReceiver;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___trv__GetReceiver(soap, &soap_tmp___trv__GetReceiver);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__GetReceiver(soap, &soap_tmp___trv__GetReceiver, "-trv:GetReceiver", NULL)
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
	 || soap_put___trv__GetReceiver(soap, &soap_tmp___trv__GetReceiver, "-trv:GetReceiver", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!trv__GetReceiverResponse)
		return soap_closesock(soap);
	trv__GetReceiverResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__GetReceiverResponse->soap_get(soap, "trv:GetReceiverResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::CreateReceiver(const char *endpoint, const char *soap_action, _trv__CreateReceiver *trv__CreateReceiver, _trv__CreateReceiverResponse *trv__CreateReceiverResponse)
{	struct soap *soap = this->soap;
	struct __trv__CreateReceiver soap_tmp___trv__CreateReceiver;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/CreateReceiver";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___trv__CreateReceiver.trv__CreateReceiver = trv__CreateReceiver;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___trv__CreateReceiver(soap, &soap_tmp___trv__CreateReceiver);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__CreateReceiver(soap, &soap_tmp___trv__CreateReceiver, "-trv:CreateReceiver", NULL)
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
	 || soap_put___trv__CreateReceiver(soap, &soap_tmp___trv__CreateReceiver, "-trv:CreateReceiver", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!trv__CreateReceiverResponse)
		return soap_closesock(soap);
	trv__CreateReceiverResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__CreateReceiverResponse->soap_get(soap, "trv:CreateReceiverResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::DeleteReceiver(const char *endpoint, const char *soap_action, _trv__DeleteReceiver *trv__DeleteReceiver, _trv__DeleteReceiverResponse *trv__DeleteReceiverResponse)
{	struct soap *soap = this->soap;
	struct __trv__DeleteReceiver soap_tmp___trv__DeleteReceiver;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/DeleteReceiver";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___trv__DeleteReceiver.trv__DeleteReceiver = trv__DeleteReceiver;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___trv__DeleteReceiver(soap, &soap_tmp___trv__DeleteReceiver);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__DeleteReceiver(soap, &soap_tmp___trv__DeleteReceiver, "-trv:DeleteReceiver", NULL)
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
	 || soap_put___trv__DeleteReceiver(soap, &soap_tmp___trv__DeleteReceiver, "-trv:DeleteReceiver", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!trv__DeleteReceiverResponse)
		return soap_closesock(soap);
	trv__DeleteReceiverResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__DeleteReceiverResponse->soap_get(soap, "trv:DeleteReceiverResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::ConfigureReceiver(const char *endpoint, const char *soap_action, _trv__ConfigureReceiver *trv__ConfigureReceiver, _trv__ConfigureReceiverResponse *trv__ConfigureReceiverResponse)
{	struct soap *soap = this->soap;
	struct __trv__ConfigureReceiver soap_tmp___trv__ConfigureReceiver;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/ConfigureReceiver";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___trv__ConfigureReceiver.trv__ConfigureReceiver = trv__ConfigureReceiver;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___trv__ConfigureReceiver(soap, &soap_tmp___trv__ConfigureReceiver);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__ConfigureReceiver(soap, &soap_tmp___trv__ConfigureReceiver, "-trv:ConfigureReceiver", NULL)
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
	 || soap_put___trv__ConfigureReceiver(soap, &soap_tmp___trv__ConfigureReceiver, "-trv:ConfigureReceiver", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!trv__ConfigureReceiverResponse)
		return soap_closesock(soap);
	trv__ConfigureReceiverResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__ConfigureReceiverResponse->soap_get(soap, "trv:ConfigureReceiverResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::SetReceiverMode(const char *endpoint, const char *soap_action, _trv__SetReceiverMode *trv__SetReceiverMode, _trv__SetReceiverModeResponse *trv__SetReceiverModeResponse)
{	struct soap *soap = this->soap;
	struct __trv__SetReceiverMode soap_tmp___trv__SetReceiverMode;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/SetReceiverMode";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___trv__SetReceiverMode.trv__SetReceiverMode = trv__SetReceiverMode;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___trv__SetReceiverMode(soap, &soap_tmp___trv__SetReceiverMode);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__SetReceiverMode(soap, &soap_tmp___trv__SetReceiverMode, "-trv:SetReceiverMode", NULL)
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
	 || soap_put___trv__SetReceiverMode(soap, &soap_tmp___trv__SetReceiverMode, "-trv:SetReceiverMode", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!trv__SetReceiverModeResponse)
		return soap_closesock(soap);
	trv__SetReceiverModeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__SetReceiverModeResponse->soap_get(soap, "trv:SetReceiverModeResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ReceiverBindingProxy::GetReceiverState(const char *endpoint, const char *soap_action, _trv__GetReceiverState *trv__GetReceiverState, _trv__GetReceiverStateResponse *trv__GetReceiverStateResponse)
{	struct soap *soap = this->soap;
	struct __trv__GetReceiverState soap_tmp___trv__GetReceiverState;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/receiver/wsdl/GetReceiverState";
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_tmp___trv__GetReceiverState.trv__GetReceiverState = trv__GetReceiverState;
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___trv__GetReceiverState(soap, &soap_tmp___trv__GetReceiverState);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___trv__GetReceiverState(soap, &soap_tmp___trv__GetReceiverState, "-trv:GetReceiverState", NULL)
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
	 || soap_put___trv__GetReceiverState(soap, &soap_tmp___trv__GetReceiverState, "-trv:GetReceiverState", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!trv__GetReceiverStateResponse)
		return soap_closesock(soap);
	trv__GetReceiverStateResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	trv__GetReceiverStateResponse->soap_get(soap, "trv:GetReceiverStateResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
