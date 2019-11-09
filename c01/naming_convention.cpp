// macros should be LIKE_THIS

#define HANDLE_EXCEPTIONS \
    catch (::mylib::exception& e) { \
        throw gcnew MyDotNetLib::Exception(e); \
    } \
    catch (::std::exception& e) { \
        throw gcnew MyDotNetLib::Exception(e, __LINE__, __FILE__); \
    } \
    catch (...) { \
        throw gcnew MyDotNetLib::UnknownException(__LINE__, __FILE__); \
}


// class name LikeThis
class NameConvention{

    // functions LikeThis
    void FunctionLike(){

    }

    // enums LikeThis too
    enum ColorsEnum { red, green, blue };

    // variable should be likeThis
    int variableLike = 0;

    private:

        // private variable should be likeThis_
        int variableLike_ = 0;

    
};