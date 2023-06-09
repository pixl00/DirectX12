struct Input
{
    float4 Color : COLOR;
};
 
float4 main(Input IN) : SV_Target
{
    return IN.Color;
}