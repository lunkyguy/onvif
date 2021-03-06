/* soapAccessRulesBindingService.cpp
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapAccessRulesBindingService.h"

AccessRulesBindingService::AccessRulesBindingService()
{	this->soap = soap_new();
	this->own = true;
	AccessRulesBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

AccessRulesBindingService::AccessRulesBindingService(struct soap *_soap)
{	this->soap = _soap;
	this->own = false;
	AccessRulesBindingService_init(_soap->imode, _soap->omode);
}

AccessRulesBindingService::AccessRulesBindingService(soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	AccessRulesBindingService_init(iomode, iomode);
}

AccessRulesBindingService::AccessRulesBindingService(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->own = true;
	AccessRulesBindingService_init(imode, omode);
}

AccessRulesBindingService::~AccessRulesBindingService()
{	if (this->own)
		soap_free(this->soap);
}

void AccessRulesBindingService::AccessRulesBindingService_init(soap_mode imode, soap_mode omode)
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

void AccessRulesBindingService::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void AccessRulesBindingService::reset()
{	destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	AccessRulesBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
AccessRulesBindingService *AccessRulesBindingService::copy()
{	AccessRulesBindingService *dup = SOAP_NEW_COPY(AccessRulesBindingService);
	if (dup)
		soap_copy_context(dup->soap, this->soap);
	return dup;
}
#endif

int AccessRulesBindingService::soap_close_socket()
{	return soap_closesock(this->soap);
}

int AccessRulesBindingService::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

int AccessRulesBindingService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this->soap, string, detailXML);
}

int AccessRulesBindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

int AccessRulesBindingService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this->soap, string, detailXML);
}

int AccessRulesBindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

void AccessRulesBindingService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void AccessRulesBindingService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *AccessRulesBindingService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

void AccessRulesBindingService::soap_noheader()
{	this->soap->header = NULL;
}

void AccessRulesBindingService::soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security)
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

const SOAP_ENV__Header *AccessRulesBindingService::soap_header()
{	return this->soap->header;
}

int AccessRulesBindingService::run(int port)
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

SOAP_SOCKET AccessRulesBindingService::bind(const char *host, int port, int backlog)
{	return soap_bind(this->soap, host, port, backlog);
}

SOAP_SOCKET AccessRulesBindingService::accept()
{	return soap_accept(this->soap);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int AccessRulesBindingService::ssl_accept()
{	return soap_ssl_accept(this->soap);
}
#endif

int AccessRulesBindingService::serve()
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

static int serve___ns3__GetServiceCapabilities(AccessRulesBindingService*);
static int serve___ns3__GetAccessProfileInfo(AccessRulesBindingService*);
static int serve___ns3__GetAccessProfileInfoList(AccessRulesBindingService*);
static int serve___ns3__GetAccessProfiles(AccessRulesBindingService*);
static int serve___ns3__GetAccessProfileList(AccessRulesBindingService*);
static int serve___ns3__CreateAccessProfile(AccessRulesBindingService*);
static int serve___ns3__ModifyAccessProfile(AccessRulesBindingService*);
static int serve___ns3__SetAccessProfile(AccessRulesBindingService*);
static int serve___ns3__DeleteAccessProfile(AccessRulesBindingService*);

int AccessRulesBindingService::dispatch()
{	AccessRulesBindingService_init(this->soap->imode, this->soap->omode);
	soap_peek_element(this->soap);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns3:GetServiceCapabilities"))
		return serve___ns3__GetServiceCapabilities(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns3:GetAccessProfileInfo"))
		return serve___ns3__GetAccessProfileInfo(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns3:GetAccessProfileInfoList"))
		return serve___ns3__GetAccessProfileInfoList(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns3:GetAccessProfiles"))
		return serve___ns3__GetAccessProfiles(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns3:GetAccessProfileList"))
		return serve___ns3__GetAccessProfileList(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns3:CreateAccessProfile"))
		return serve___ns3__CreateAccessProfile(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns3:ModifyAccessProfile"))
		return serve___ns3__ModifyAccessProfile(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns3:SetAccessProfile"))
		return serve___ns3__SetAccessProfile(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "ns3:DeleteAccessProfile"))
		return serve___ns3__DeleteAccessProfile(this);
	return this->soap->error = SOAP_NO_METHOD;
}

static int serve___ns3__GetServiceCapabilities(AccessRulesBindingService *service)
{	struct soap *soap = service->soap;
	struct __ns3__GetServiceCapabilities soap_tmp___ns3__GetServiceCapabilities;
	_ns3__GetServiceCapabilitiesResponse ns3__GetServiceCapabilitiesResponse;
	ns3__GetServiceCapabilitiesResponse.soap_default(soap);
	soap_default___ns3__GetServiceCapabilities(soap, &soap_tmp___ns3__GetServiceCapabilities);
	if (!soap_get___ns3__GetServiceCapabilities(soap, &soap_tmp___ns3__GetServiceCapabilities, "-ns3:GetServiceCapabilities", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetServiceCapabilities(soap_tmp___ns3__GetServiceCapabilities.ns3__GetServiceCapabilities, &ns3__GetServiceCapabilitiesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__GetServiceCapabilitiesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__GetServiceCapabilitiesResponse.soap_put(soap, "ns3:GetServiceCapabilitiesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__GetServiceCapabilitiesResponse.soap_put(soap, "ns3:GetServiceCapabilitiesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__GetAccessProfileInfo(AccessRulesBindingService *service)
{	struct soap *soap = service->soap;
	struct __ns3__GetAccessProfileInfo soap_tmp___ns3__GetAccessProfileInfo;
	_ns3__GetAccessProfileInfoResponse ns3__GetAccessProfileInfoResponse;
	ns3__GetAccessProfileInfoResponse.soap_default(soap);
	soap_default___ns3__GetAccessProfileInfo(soap, &soap_tmp___ns3__GetAccessProfileInfo);
	if (!soap_get___ns3__GetAccessProfileInfo(soap, &soap_tmp___ns3__GetAccessProfileInfo, "-ns3:GetAccessProfileInfo", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetAccessProfileInfo(soap_tmp___ns3__GetAccessProfileInfo.ns3__GetAccessProfileInfo, &ns3__GetAccessProfileInfoResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__GetAccessProfileInfoResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__GetAccessProfileInfoResponse.soap_put(soap, "ns3:GetAccessProfileInfoResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__GetAccessProfileInfoResponse.soap_put(soap, "ns3:GetAccessProfileInfoResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__GetAccessProfileInfoList(AccessRulesBindingService *service)
{	struct soap *soap = service->soap;
	struct __ns3__GetAccessProfileInfoList soap_tmp___ns3__GetAccessProfileInfoList;
	_ns3__GetAccessProfileInfoListResponse ns3__GetAccessProfileInfoListResponse;
	ns3__GetAccessProfileInfoListResponse.soap_default(soap);
	soap_default___ns3__GetAccessProfileInfoList(soap, &soap_tmp___ns3__GetAccessProfileInfoList);
	if (!soap_get___ns3__GetAccessProfileInfoList(soap, &soap_tmp___ns3__GetAccessProfileInfoList, "-ns3:GetAccessProfileInfoList", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetAccessProfileInfoList(soap_tmp___ns3__GetAccessProfileInfoList.ns3__GetAccessProfileInfoList, &ns3__GetAccessProfileInfoListResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__GetAccessProfileInfoListResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__GetAccessProfileInfoListResponse.soap_put(soap, "ns3:GetAccessProfileInfoListResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__GetAccessProfileInfoListResponse.soap_put(soap, "ns3:GetAccessProfileInfoListResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__GetAccessProfiles(AccessRulesBindingService *service)
{	struct soap *soap = service->soap;
	struct __ns3__GetAccessProfiles soap_tmp___ns3__GetAccessProfiles;
	_ns3__GetAccessProfilesResponse ns3__GetAccessProfilesResponse;
	ns3__GetAccessProfilesResponse.soap_default(soap);
	soap_default___ns3__GetAccessProfiles(soap, &soap_tmp___ns3__GetAccessProfiles);
	if (!soap_get___ns3__GetAccessProfiles(soap, &soap_tmp___ns3__GetAccessProfiles, "-ns3:GetAccessProfiles", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetAccessProfiles(soap_tmp___ns3__GetAccessProfiles.ns3__GetAccessProfiles, &ns3__GetAccessProfilesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__GetAccessProfilesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__GetAccessProfilesResponse.soap_put(soap, "ns3:GetAccessProfilesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__GetAccessProfilesResponse.soap_put(soap, "ns3:GetAccessProfilesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__GetAccessProfileList(AccessRulesBindingService *service)
{	struct soap *soap = service->soap;
	struct __ns3__GetAccessProfileList soap_tmp___ns3__GetAccessProfileList;
	_ns3__GetAccessProfileListResponse ns3__GetAccessProfileListResponse;
	ns3__GetAccessProfileListResponse.soap_default(soap);
	soap_default___ns3__GetAccessProfileList(soap, &soap_tmp___ns3__GetAccessProfileList);
	if (!soap_get___ns3__GetAccessProfileList(soap, &soap_tmp___ns3__GetAccessProfileList, "-ns3:GetAccessProfileList", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetAccessProfileList(soap_tmp___ns3__GetAccessProfileList.ns3__GetAccessProfileList, &ns3__GetAccessProfileListResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__GetAccessProfileListResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__GetAccessProfileListResponse.soap_put(soap, "ns3:GetAccessProfileListResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__GetAccessProfileListResponse.soap_put(soap, "ns3:GetAccessProfileListResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__CreateAccessProfile(AccessRulesBindingService *service)
{	struct soap *soap = service->soap;
	struct __ns3__CreateAccessProfile soap_tmp___ns3__CreateAccessProfile;
	_ns3__CreateAccessProfileResponse ns3__CreateAccessProfileResponse;
	ns3__CreateAccessProfileResponse.soap_default(soap);
	soap_default___ns3__CreateAccessProfile(soap, &soap_tmp___ns3__CreateAccessProfile);
	if (!soap_get___ns3__CreateAccessProfile(soap, &soap_tmp___ns3__CreateAccessProfile, "-ns3:CreateAccessProfile", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->CreateAccessProfile(soap_tmp___ns3__CreateAccessProfile.ns3__CreateAccessProfile, &ns3__CreateAccessProfileResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__CreateAccessProfileResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__CreateAccessProfileResponse.soap_put(soap, "ns3:CreateAccessProfileResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__CreateAccessProfileResponse.soap_put(soap, "ns3:CreateAccessProfileResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__ModifyAccessProfile(AccessRulesBindingService *service)
{	struct soap *soap = service->soap;
	struct __ns3__ModifyAccessProfile soap_tmp___ns3__ModifyAccessProfile;
	_ns3__ModifyAccessProfileResponse ns3__ModifyAccessProfileResponse;
	ns3__ModifyAccessProfileResponse.soap_default(soap);
	soap_default___ns3__ModifyAccessProfile(soap, &soap_tmp___ns3__ModifyAccessProfile);
	if (!soap_get___ns3__ModifyAccessProfile(soap, &soap_tmp___ns3__ModifyAccessProfile, "-ns3:ModifyAccessProfile", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->ModifyAccessProfile(soap_tmp___ns3__ModifyAccessProfile.ns3__ModifyAccessProfile, &ns3__ModifyAccessProfileResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__ModifyAccessProfileResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__ModifyAccessProfileResponse.soap_put(soap, "ns3:ModifyAccessProfileResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__ModifyAccessProfileResponse.soap_put(soap, "ns3:ModifyAccessProfileResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__SetAccessProfile(AccessRulesBindingService *service)
{	struct soap *soap = service->soap;
	struct __ns3__SetAccessProfile soap_tmp___ns3__SetAccessProfile;
	_ns3__SetAccessProfileResponse ns3__SetAccessProfileResponse;
	ns3__SetAccessProfileResponse.soap_default(soap);
	soap_default___ns3__SetAccessProfile(soap, &soap_tmp___ns3__SetAccessProfile);
	if (!soap_get___ns3__SetAccessProfile(soap, &soap_tmp___ns3__SetAccessProfile, "-ns3:SetAccessProfile", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->SetAccessProfile(soap_tmp___ns3__SetAccessProfile.ns3__SetAccessProfile, &ns3__SetAccessProfileResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__SetAccessProfileResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__SetAccessProfileResponse.soap_put(soap, "ns3:SetAccessProfileResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__SetAccessProfileResponse.soap_put(soap, "ns3:SetAccessProfileResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns3__DeleteAccessProfile(AccessRulesBindingService *service)
{	struct soap *soap = service->soap;
	struct __ns3__DeleteAccessProfile soap_tmp___ns3__DeleteAccessProfile;
	_ns3__DeleteAccessProfileResponse ns3__DeleteAccessProfileResponse;
	ns3__DeleteAccessProfileResponse.soap_default(soap);
	soap_default___ns3__DeleteAccessProfile(soap, &soap_tmp___ns3__DeleteAccessProfile);
	if (!soap_get___ns3__DeleteAccessProfile(soap, &soap_tmp___ns3__DeleteAccessProfile, "-ns3:DeleteAccessProfile", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->DeleteAccessProfile(soap_tmp___ns3__DeleteAccessProfile.ns3__DeleteAccessProfile, &ns3__DeleteAccessProfileResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns3__DeleteAccessProfileResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns3__DeleteAccessProfileResponse.soap_put(soap, "ns3:DeleteAccessProfileResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns3__DeleteAccessProfileResponse.soap_put(soap, "ns3:DeleteAccessProfileResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
