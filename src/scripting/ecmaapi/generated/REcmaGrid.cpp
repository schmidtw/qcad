// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaGrid.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocument.h"
            
                #include "RGraphicsView.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaGrid::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RGrid*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, clearCache, "clearCache");
            
            REcmaHelper::registerFunction(&engine, proto, snapToGrid, "snapToGrid");
            
            REcmaHelper::registerFunction(&engine, proto, update, "update");
            
            REcmaHelper::registerFunction(&engine, proto, paint, "paint");
            
            REcmaHelper::registerFunction(&engine, proto, paintMetaGrid, "paintMetaGrid");
            
            REcmaHelper::registerFunction(&engine, proto, paintCursor, "paintCursor");
            
            REcmaHelper::registerFunction(&engine, proto, paintRuler, "paintRuler");
            
            REcmaHelper::registerFunction(&engine, proto, getInfoText, "getInfoText");
            
            REcmaHelper::registerFunction(&engine, proto, getViewportNumber, "getViewportNumber");
            
            REcmaHelper::registerFunction(&engine, proto, getDocument, "getDocument");
            
            REcmaHelper::registerFunction(&engine, proto, setVisible, "setVisible");
            
            REcmaHelper::registerFunction(&engine, proto, isVisible, "isVisible");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RGrid*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RGrid",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaGrid::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RGrid: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaGrid::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RGrid"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaGrid::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaGrid::clearCache
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGrid::clearCache", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGrid::clearCache";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGrid* self = 
                        getSelf("clearCache", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->clearCache();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGrid.clearCache().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGrid::clearCache", context, engine);
            return result;
        }
         QScriptValue
        REcmaGrid::snapToGrid
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGrid::snapToGrid", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGrid::snapToGrid";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGrid* self = 
                        getSelf("snapToGrid", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RGrid: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->snapToGrid(a0);
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGrid.snapToGrid().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGrid::snapToGrid", context, engine);
            return result;
        }
         QScriptValue
        REcmaGrid::update
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGrid::update", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGrid::update";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGrid* self = 
                        getSelf("update", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->update();
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->update(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGrid.update().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGrid::update", context, engine);
            return result;
        }
         QScriptValue
        REcmaGrid::paint
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGrid::paint", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGrid::paint";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGrid* self = 
                        getSelf("paint", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->paint();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGrid.paint().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGrid::paint", context, engine);
            return result;
        }
         QScriptValue
        REcmaGrid::paintMetaGrid
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGrid::paintMetaGrid", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGrid::paintMetaGrid";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGrid* self = 
                        getSelf("paintMetaGrid", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->paintMetaGrid();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGrid.paintMetaGrid().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGrid::paintMetaGrid", context, engine);
            return result;
        }
         QScriptValue
        REcmaGrid::paintCursor
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGrid::paintCursor", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGrid::paintCursor";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGrid* self = 
                        getSelf("paintCursor", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RGrid: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->paintCursor(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGrid.paintCursor().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGrid::paintCursor", context, engine);
            return result;
        }
         QScriptValue
        REcmaGrid::paintRuler
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGrid::paintRuler", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGrid::paintRuler";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGrid* self = 
                        getSelf("paintRuler", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RRuler */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    RRuler*
                    ap0 =
                    qscriptvalue_cast<
                    RRuler*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RGrid: Argument 0 is not of type RRuler*.",
                               context);                    
                    }
                    RRuler& a0 = *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->paintRuler(a0);
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RRuler */
     && (
            context->argument(1).isNumber()
        ) /* type: qreal */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    RRuler*
                    ap0 =
                    qscriptvalue_cast<
                    RRuler*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RGrid: Argument 0 is not of type RRuler*.",
                               context);                    
                    }
                    RRuler& a0 = *ap0;
                
                    // argument isStandardType
                    qreal
                    a1 =
                    (qreal)
                    
                    context->argument( 1 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->paintRuler(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGrid.paintRuler().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGrid::paintRuler", context, engine);
            return result;
        }
         QScriptValue
        REcmaGrid::getInfoText
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGrid::getInfoText", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGrid::getInfoText";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGrid* self = 
                        getSelf("getInfoText", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getInfoText();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGrid.getInfoText().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGrid::getInfoText", context, engine);
            return result;
        }
         QScriptValue
        REcmaGrid::getViewportNumber
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGrid::getViewportNumber", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGrid::getViewportNumber";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGrid* self = 
                        getSelf("getViewportNumber", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'int'
    int cppResult =
        
               self->getViewportNumber();
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGrid.getViewportNumber().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGrid::getViewportNumber", context, engine);
            return result;
        }
         QScriptValue
        REcmaGrid::getDocument
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGrid::getDocument", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGrid::getDocument";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGrid* self = 
                        getSelf("getDocument", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RDocument *'
    RDocument * cppResult =
        
               self->getDocument();
        // return type: RDocument *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGrid.getDocument().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGrid::getDocument", context, engine);
            return result;
        }
         QScriptValue
        REcmaGrid::setVisible
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGrid::setVisible", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGrid::setVisible";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGrid* self = 
                        getSelf("setVisible", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setVisible(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGrid.setVisible().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGrid::setVisible", context, engine);
            return result;
        }
         QScriptValue
        REcmaGrid::isVisible
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGrid::isVisible", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGrid::isVisible";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGrid* self = 
                        getSelf("isVisible", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->isVisible();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGrid.isVisible().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGrid::isVisible", context, engine);
            return result;
        }
         QScriptValue REcmaGrid::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RGrid* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RGrid(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaGrid::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RGrid* self = getSelf("RGrid", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RGrid* REcmaGrid::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RGrid* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RGrid >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RGrid.%1(): "
                        "This object is not a RGrid").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RGrid* REcmaGrid::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RGrid* selfBase = getSelf(fName, context);
                RGrid* self = dynamic_cast<RGrid*>(selfBase);
                //return REcmaHelper::scriptValueTo<RGrid >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RGrid.%1(): "
                    "This object is not a RGrid").arg(fName),
                    context);
            }

            return self;
            


        }
        