bool solution(bool young, bool beautiful, bool loved) {
    return (young && beautiful && !loved) || (loved && (!young || !beautiful));
}
