#ifndef __USER_VERSION_H__
#define __USER_VERSION_H__

#define NODE_VERSION_MAJOR		2U
#define NODE_VERSION_MINOR		0U
#define NODE_VERSION_REVISION	0U
#define NODE_VERSION_INTERNAL   0U

#define NODE_VERSION "NodeMCU custom build by apwiede\n\tbranch: dev\n\tcommit: f1f8eb3371edcf60dd466e7a822f211cc8c1a72b\n\tSSL: true\n\tmodules: compmsg,file,net,rboot,tmr,uart,wifi\n"
#ifndef BUILD_DATE
#define BUILD_DATE "\tbuilt on: 2017-03-03 19:50\n"
#endif

extern char SDK_VERSION[];

#endif	/* __USER_VERSION_H__ */
