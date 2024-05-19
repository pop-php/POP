namespace POP
{
    namespace commandHandler
    {
        enum validityType {
            VALID,
            INVALID,
            NOT_IMPL
        };

        validityType validate(const char* command);

        bool handle(char* args[]);
    }
}
