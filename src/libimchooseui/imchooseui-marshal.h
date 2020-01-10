
#ifndef __imchoose_ui_marshal_MARSHAL_H__
#define __imchoose_ui_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:BOXED,STRING (./marshal.list:25) */
extern void imchoose_ui_marshal_VOID__BOXED_STRING (GClosure     *closure,
                                                    GValue       *return_value,
                                                    guint         n_param_values,
                                                    const GValue *param_values,
                                                    gpointer      invocation_hint,
                                                    gpointer      marshal_data);

/* VOID:STRING,STRING (./marshal.list:26) */
extern void imchoose_ui_marshal_VOID__STRING_STRING (GClosure     *closure,
                                                     GValue       *return_value,
                                                     guint         n_param_values,
                                                     const GValue *param_values,
                                                     gpointer      invocation_hint,
                                                     gpointer      marshal_data);

/* VOID:STRING (./marshal.list:27) */
#define imchoose_ui_marshal_VOID__STRING	g_cclosure_marshal_VOID__STRING

/* VOID:VOID (./marshal.list:28) */
#define imchoose_ui_marshal_VOID__VOID	g_cclosure_marshal_VOID__VOID

G_END_DECLS

#endif /* __imchoose_ui_marshal_MARSHAL_H__ */

